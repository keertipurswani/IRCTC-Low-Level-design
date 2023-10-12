#pragma once
#include "../common_include_files.hpp"

class ConfigReader {
public:
    static ConfigReader& getInstance();
    void Initialize(const string& filePath);
    bool GetValue(const string& section, const string& key, bool& value) const;
    map<string, map<string, bool>> GetConfigMap() {
        return configData;
    }
    ~ConfigReader();

private:
    ConfigReader();
    ConfigReader(const ConfigReader&) = delete;
    ConfigReader& operator=(const ConfigReader&) = delete;

    map<string, map<string, bool>> configData;
};
