#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;

    std::cout << "Original values: a = " << a << ", b = " << b << std::endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    std::cout << "Swapped values: a = " << a << ", b = " << b << std::endl;

    return 0;
}
