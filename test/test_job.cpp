#include <iostream>
#include <fstream>


int main(size_t argc, char** argv) {
    std::ofstream oufile{"testfile.txt"};
    if (!oufile) {
        std::cout << "Error opening file." << std::endl;
        return 1;
    }
    oufile << "If you see this text - then this program works perfectly well, congrats!" << std::endl;
}