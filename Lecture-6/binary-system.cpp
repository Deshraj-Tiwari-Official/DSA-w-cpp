#include <iostream>

using namespace std;

int convert_to_binary(int decimal_number) {
    int binary = 0;
    int place_value = 1;
    while (decimal_number > 0) {
        int remainder = decimal_number % 2;
        decimal_number /= 2;
        binary += remainder * place_value;
        place_value *= 10;
    }
    return binary;
}

int convert_to_decimal(int binary_number) {
    int decimal_number = 0;
    int base = 1;
    while (binary_number > 0) {
        int last_digit = binary_number % 10;
        binary_number /= 10;
        decimal_number += last_digit * base;
        base *= 2;
    }
    return decimal_number;
}

int main() {
    int decimal_number;
    cout << "Enter the decimal number to convert to binary: ";
    cin >> decimal_number;
    int binary = convert_to_binary(decimal_number);
    cout << "Binary: " << binary << endl;

    int binary_number;
    cout << "Enter the binary number to convert to decimal: ";
    cin >> binary_number;
    int decimal = convert_to_decimal(binary_number);
    cout << "Decimal: " << decimal << endl;

    return 0;
}
