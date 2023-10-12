package config;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;

public class ConfigReader {
    private static ConfigReader instance = new ConfigReader();
    private Map<String, Map<String, Boolean>> configData;

    private ConfigReader() {
        configData = new HashMap<>();
    }

    public static ConfigReader getInstance() {
        //Implement Singleton - Double Checked Locking should be there
        return instance;
    }

    public void Initialize(String filePath) {
        try (BufferedReader configFile = new BufferedReader(new FileReader(filePath))) {
            String currentSection = null;
            String line;

            while ((line = configFile.readLine()) != null) {
                line = line.trim();

                if (line.isEmpty()) {
                    continue; // Skip empty lines
                }

                if (line.endsWith(":")) {
                    // This line is a section header
                    currentSection = line.substring(0, line.length() - 1);
                } else {
                    // This line contains key-value pairs
                    int colonPos = line.indexOf(':');
                    if (colonPos != -1) {
                        String key = line.substring(0, colonPos).trim();
                        boolean value = line.substring(colonPos + 1).trim().equals("true");

                        // Store the key-value pair in the map
                        configData
                                .computeIfAbsent(currentSection, k -> new HashMap<>())
                                .put(key, value);
                    }
                }
            }
        } catch (IOException e) {
            System.err.println("Failed to open the config file: " + filePath);
        }
    }

    public boolean GetValue(String section, String key, boolean[] value) {
        Map<String, Boolean> sectionMap = configData.get(section);
        if (sectionMap != null) {
            Boolean sectionValue = sectionMap.get(key);
            if (sectionValue != null) {
                value[0] = sectionValue;
                return true;
            }
        }
        return false;
    }

    public Map<String, Map<String, Boolean>> GetConfigMap() {
        return configData;
    }
}
