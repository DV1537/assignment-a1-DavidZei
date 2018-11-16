#include "Buffer.h"
#include <iostream>

void Buffer::newValue(float addValue)
{
    //enlarge newly allocated array and store value to buffer
    float* resizeArr = new float[size + 1];
    numArr[size-1] = addValue;

    for(int i = 0; i < size; i++)
        resizeArr[i] = numArr[i];

    size++; 

    //realease old memory
    delete[] numArr;
    // reassign numArr pointer to point to expanded array
    numArr = resizeArr;
}

void Buffer::printAboveAvg()
{
    float avg = 0.0;
    float sum = 0.0;

    for (int i = 0; i < size-1; i++)
    {
        sum += numArr[i];
    }

    avg = sum/(size-1);

    std::cout << "   " << "Output: ";

    for (int i = 0; i < size-1; i++)
    {
        if(numArr[i] > avg)
        {
            std::cout << numArr[i] << " ";
        }
    }
    std::cout << "\n";
}
