#include <string>

namespace log_line {
std::string message(std::string line) {
    int whitespaceIndex = line.find(' ');
    return line.substr(whitespaceIndex + 1);
}

std::string log_level(std::string line) {
    int start = line.find('[') + 1;
    int end = line.find(']') - 1;
    int size = end - start + 1;
    return line.substr(start, size);
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
