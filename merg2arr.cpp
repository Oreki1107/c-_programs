#include <iostream>

int main() {
    const int size1 = 5;
    const int size2 = 3;

    int arr1[size1] = {1, 2, 3, 4, 5};
    int arr2[size2] = {6, 7, 8};


    const int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }

    std::cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        std::cout << mergedArr[i] << " ";
    }

    return 0;
}
