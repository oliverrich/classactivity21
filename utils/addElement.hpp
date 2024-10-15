// addElement.hpp
#ifndef ADDELEMENT_H
#define ADDELEMENT_H
#include <memory>

void addElement(std::unique_ptr<int[]>& array, int& currentSize, int& maxSize, int input);

#endif
