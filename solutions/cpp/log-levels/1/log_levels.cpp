#include <string>

namespace log_line {
    std::string message(std::string line) {
        std::string::size_type period = line.find(":");
        std::string::size_type coma =  line.find("\"", period);
        std::string message = line.substr(period+2, coma-1);
        return message;
    
    }

    std::string log_level(std::string line) {
        std::string::size_type period = line.find("[");
        std::string::size_type coma =  line.find("]");
        std::string log_level = line.substr(period+1, coma-1);
        return log_level;
    }

    std::string reformat(std::string line) {
        std::string log_level1 = log_level(line);
        std::string message1 = message(line);
        return message1 + " (" + log_level1 + ")";
    }
}  // namespace log_line
