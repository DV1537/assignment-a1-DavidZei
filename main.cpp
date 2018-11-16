#include "Buffer.h"
#include <iostream>
#include <fstream>


int main()
{
    Buffer buffer;
    float readInt;

    std::ifstream readFile;
    readFile.open("test.txt");

    std::cout << "Input: ";
    while(readFile >> readInt)
    {
        std::cout << readInt << " ";
        buffer.newValue(readInt);
    }
    readFile.close();

    buffer.printAboveAvg();

    std::cin.get();
    return 0;
}
