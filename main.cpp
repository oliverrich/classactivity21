
#include "utils/addElement.hpp"
#include "utils/sumArray.hpp"
#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int[]> intArray = make_unique<int[]>(1);
    int currentSize = 0;
    int maxSize = 1;
    int input;

    cout << "Enter values for the array (enter anything but an integer to stop):" << endl;

    while (cin >> input) {
        addElement(intArray, currentSize, maxSize, input);
    }

    int sum = sumArray(intArray, currentSize);
    cout << "The sum of the array is: " << sum << endl;


    return 0;
}
