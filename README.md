# C++ ArrayListType Template Class

In this repository, there exists a template class named `arrayListType` in C++. This class provides a data structure based on a dynamically sized array.

## Usage

The `arrayListType` template class offers a general-purpose array data structure in C++ programs. Examples of usage are as follows:

```cpp
#include <iostream>
#include "test.h"

using namespace std;

int main() {
    // Example usage
    arrayListType<int> intList(10); // Create an array of 10 elements of type int

    intList.insertEnd(5); // Add 5 to the array
    intList.insertEnd(10); // Add 10 to the array
    intList.insertEnd(15); // Add 15 to the array

    cout << "Elements of the array: ";
    intList.print(); // Print the elements of the array

    return 0;
}
