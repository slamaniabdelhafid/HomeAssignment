#include <iostream>

#include <fstream>

#include <vector>

int main() {

const char* filename = "a.out";

// Open the file in binary mode

std::ifstream file(filename, std::ios::binary);

if (!file.is_open()) {

std::cerr <<<<< "Error opening file: " << filename << std::endl;

return 1;

}

// Get the file size

file.seekg (0, std::ios::end);

std::streamsize fileSize = file.tellg(); file.seekg(0, std::ios::beg);

// Allocate a vector to hold the file contents

std::vector<char> buffer(fileSize);

// Read the file into the vector

if (!file.read(buffer.data(), fileSize)) {

std::cerr <<< "Error reading file" << std::endl;