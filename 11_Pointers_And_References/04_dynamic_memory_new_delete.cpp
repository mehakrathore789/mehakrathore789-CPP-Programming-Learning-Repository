/*
 * Program: Dynamic Memory with new and delete
 * Description: 'new' allocates memory on the heap at runtime; 'delete'
 *              releases it. This is the C++ counterpart to malloc()/free().
 */

#include <iostream>
using namespace std;

int main() {
    // Allocate a single int on the heap
    int *singleValue = new int(25);
    cout << "Heap-allocated int: " << *singleValue << endl;
    delete singleValue; // release the memory
    singleValue = nullptr; // avoid a dangling pointer

    // Allocate a dynamic array on the heap
    int size = 5;
    int *dynamicArray = new int[size];
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    cout << "Dynamic array: ";
    for (int i = 0; i < size; i++) cout << dynamicArray[i] << " ";
    cout << endl;

    delete[] dynamicArray; // use delete[] for arrays allocated with new[]
    dynamicArray = nullptr;

    return 0;
}
