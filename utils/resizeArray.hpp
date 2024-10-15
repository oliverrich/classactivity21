// resizeArray.h
#ifndef RESIZEARRAY_H
#define RESIZEARRAY_H
#include <memory>

void resizeArray(std::unique_ptr<int[]>& array, int& maxSize, int currentSize);

#endif
