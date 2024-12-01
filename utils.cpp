#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> readFileLines(const std::string &file_name) {
    std::ifstream file("inputs/" + file_name + ".txt");
    if (!file.is_open()) throw std::runtime_error("Could not find file: " + file_name);

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) lines.push_back(line);
    return lines;
}
