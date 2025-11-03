#include <iostream>
#include <string>
#include "lib.hpp"


int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <arg1> <arg2>" << std::endl;
        return 1;
    }

    int result = process(argv[1], argv[2]);
    return result;
}
