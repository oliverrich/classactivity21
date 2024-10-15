// sumArray.cpp
#include "sumArray.hpp"

int sumArray(const std::unique_ptr<int[]>& array, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}
