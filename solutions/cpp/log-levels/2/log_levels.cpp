#include <string>

namespace log_line {
    std::string message(std::string line) {
        auto period = line.find(":");
        //auto coma =  line.find("\"", period);
        return  line.substr(period+2, line.size());
    }

    std::string log_level(std::string line) {
        auto period = line.find("[");
        auto coma =  line.find("]");
        return  line.substr(period+1, coma-1);
    }

    std::string reformat(std::string line) {
        auto log = log_level(line);
        auto text = message(line);
        return text + " (" + log + ")";
    }
}  // namespace log_line
