#include <string>

namespace log_line {
    std::string message(std::string line) {
        /*auto period = line.find(":");
        auto coma =  line.find("\"", period);*/
        return  line.substr(line.find(":") + 2, line.size());
    }

    std::string log_level(std::string line) {
        /*auto opening_bracket = line.find("[");
        auto closing_bracket =  line.find("]");
        return  line.substr(opening_bracket + 1, closing_bracket - 1);*/
        return line.substr(line.find("[") + 1,  line.find("]") -1 );
    }

    std::string reformat(std::string line) {
        /*auto log = log_level(line);
        auto text = message(line);
        return text + " (" + log + ")";*/
        return message(line) + " (" + log_level(line) + ")";
    }
}  // namespace log_line

