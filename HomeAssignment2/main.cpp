#include <fstream>
#include <iostream>

void assignment2a(const char* file_path) {
    std::ifstream file(file_path, std::ios::binary);

    if (!file) {
        std::cerr << "Error opening file: " << file_path << std::endl;
        return;
    }

    file.seekg(0, std::ios::end);
    std::streampos file_size = file.tellg();
    file.seekg(0, std::ios::beg);

    char* data = new char[file_size];

    file.read(data, file_size);

    for (std::streampos i = 0; i < file_size / 2; ++i) {
        char temp = data[i];
        data[i] = data[file_size - i - 1];
        data[file_size - i - 1] = temp;
    }

    std::ofstream new_file("reversed_file.bin", std::ios::binary);
    new_file.write(data, file_size);

    delete[] data;
}

int main() {
    assignment2a("original_file.bin");
    return 0;
}
