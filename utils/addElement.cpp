// addElement.cpp
#include "addElement.hpp"
#include "resizeArray.hpp"

void addElement(std::unique_ptr<int[]>& array, int& currentSize, int& maxSize, int input) {
    if (currentSize == maxSize) {
        resizeArray(array, maxSize, currentSize);
    }
    array[currentSize] = input;
    currentSize++;
}
