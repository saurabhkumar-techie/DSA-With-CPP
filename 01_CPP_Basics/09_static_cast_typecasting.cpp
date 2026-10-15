#include <iostream>
using namespace std;

int main() {
    // Integer variable
    int number = 10;

    // Convert int to double using static_cast
    double result = static_cast<double>(number);

    // Print original integer and converted double value
    cout << "Integer: " << number << endl;
    cout << "Converted to double: " << result << endl;

    // Double variable
    double price = 99.75;

    // Convert double to int using static_cast
    // Decimal part will be removed (truncated)
    int wholePrice = static_cast<int>(price);

    // Print original double and converted integer value
    cout << "Double: " << price << endl;
    cout << "Converted to int: " << wholePrice << endl;

    // Integer variables for division
    int a = 7;
    int b = 2;

    // Convert a to double before division so we get decimal result
    double division = static_cast<double>(a) / b;

    // Print division result with decimal value
    cout << "Decimal division: " << division << endl;

    return 0;
}