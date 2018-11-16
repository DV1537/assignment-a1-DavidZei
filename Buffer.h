#ifndef BUFFER_H
#define BUFFER_H

class Buffer
{
private:
    int size = 1;
    float* numArr = new float[size];

public:
    void newValue(float addValue);
    void printAboveAvg();
};

#endif //BUFFER_H