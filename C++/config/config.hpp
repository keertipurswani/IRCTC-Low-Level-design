#ifndef CONFIGREADER_HPP
#define CONFIGREADER_HPP

#include "../common_include_files.hpp"

class ConfigReader {
public:
    static ConfigReader& getInstance();
    void Initialize(const std::string& filePath);
    bool GetValue(const std::string& section, const std::string& key, bool& value) const;
    std::map<std::string, std::map<std::string, bool>> GetConfigMap() {
        return configData;
    }
    ~ConfigReader();



private:
    ConfigReader();
    ConfigReader(const ConfigReader&) = delete;
    ConfigReader& operator=(const ConfigReader&) = delete;

    std::map<std::string, std::map<std::string, bool>> configData;
};

#endif // CONFIGREADER_HPP
