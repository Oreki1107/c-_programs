#include <iostream>
using namespace std;
int main() {
    float num1, num2;

    // Read input from the user
    cout << "Enter the first floating-point number: ";
    cin >> num1;

    cout << "Enter the second floating-point number: ";
    cin >> num2;

    // Perform operations and display results
    cout << "Sum: " << num1 + num2 << std::endl;
    cout << "Difference: " << num1 - num2 << std::endl;
    cout << "Product: " << num1 * num2 << std::endl;

    // Check if the second number is not zero before performing division and modulo
    if (num2 != 0) {
        cout << "Quotient: " << num1 / num2 << std::endl;
    } else {
        cout << "Cannot perform division and modulo. The second number is zero." << std::endl;
    }

    return 0;
}
