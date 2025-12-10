#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(const string &bin) {
    int n = bin.size();
    int ans = 0;
    int power = 1;  // represents 2^0 initially

    // traverse from rightmost bit to left
    for (int i = n - 1; i >= 0; i--) {
        char ch = bin[i];
        if (ch == '1') {
            ans += power;   // add current power of 2
        }
        // move to next power of 2
        power *= 2;
    }

    return ans;
}

int main() {
    string bin;
    cout << "Enter a binary number: ";
    cin >> bin;

    int dec = binaryToDecimal(bin);
    cout << "Decimal: " << dec << endl;

    return 0;
}
// This program converts a binary number (given as a string) to its decimal equivalent.
// It defines a function 'binaryToDecimal' that processes each bit of the binary string from right to left,
// calculating the corresponding decimal value by adding powers of 2 where bits are '1'.
// The main function prompts the user for a binary input and displays the converted decimal value.
// Example Input: 1011
// Example Output: Decimal: 11
