#include <iostream>
#include <algorithm>   // reverse ke liye
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";   // edge case

    string bits = "";

    while (n > 0) {
        int bit = n % 2;                 // 0 ya 1
        bits.push_back('0' + bit);       // int (0/1) ko char me convert
        n = n / 2;                       // n ko half kar do
    }

    // Ab bits LSB → MSB order me hain, isliye reverse karna hai
    reverse(bits.begin(), bits.end());
    return bits;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    string bin = decimalToBinary(n);
    cout << "Binary: " << bin << endl;

    return 0;
}
// This program converts a decimal number to its binary representation.
// It defines a function 'decimalToBinary' that repeatedly divides the number by 2,
// collecting the remainders (bits) and then reverses the string to get the correct binary order.
// The main function prompts the user for a decimal input and displays the converted binary string.
// Example Input: 13
// Example Output: Binary: 1101