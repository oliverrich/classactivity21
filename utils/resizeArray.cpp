// resizeArray.cpp
#include "resizeArray.hpp"

void resizeArray(std::unique_ptr<int[]>& array, int& maxSize, int currentSize) {
    maxSize *= 2;
    std::unique_ptr<int[]> tempArray = std::make_unique<int[]>(maxSize);

    // Copy the old elements to the new array
    for (int i = 0; i < currentSize; i++) {
        tempArray[i] = array[i];
    }

    // Move the new array into the original unique_ptr
    array = std::move(tempArray);
}
