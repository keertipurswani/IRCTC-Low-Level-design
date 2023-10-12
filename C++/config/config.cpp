#include "config.hpp"
#include <fstream>
#include <iostream>

ConfigReader::ConfigReader() {}

ConfigReader::~ConfigReader() {}

ConfigReader& ConfigReader::getInstance() {
    //Implement Singleton - Double Checked Locking should be there
    static ConfigReader instance;
    return instance;
}

void ConfigReader::Initialize(const string& filePath) {
    ifstream configFile(filePath);
    if (!configFile.is_open()) {
        cerr << "Failed to open the config file: " << filePath << endl;
        return;
    }

    string currentSection;
    string line;

    while (getline(configFile, line)) {
        // Trim leading and trailing whitespace
        size_t firstNonSpace = line.find_first_not_of(" \t");
        if (firstNonSpace == string::npos) {
            // Skip empty lines
            continue;
        }

        line = line.substr(firstNonSpace);

        if (line.back() == ':') {
            // This line is a section header
            currentSection = line.substr(0, line.length() - 1);
        }
        else {
            // This line contains key-value pairs
            size_t colonPos = line.find(':');
            if (colonPos != string::npos) {
                string key = line.substr(0, colonPos);
                bool value = line.substr(colonPos + 1) == "true";

                // Store the key-value pair in the map
                configData[currentSection][key] = value;
            }
        }
    }

    configFile.close();
}

bool ConfigReader::GetValue(const string& section, const string& key, bool& value) const {
    auto sectionIter = configData.find(section);
    if (sectionIter != configData.end()) {
        auto keyIter = sectionIter->second.find(key);
        if (keyIter != sectionIter->second.end()) {
            value = keyIter->second;
            return true;
        }
    }
    return false;
}
