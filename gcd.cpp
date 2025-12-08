#include<iostream>
using namespace std;
int gcd(int a, int b) {
    // Base case: if b is 0, then gcd is a
    if (b == 0)
        return a;
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}
int main() {
    int num1, num2;
    cout << "Enter two numbers to find their GCD:" << endl;
    cin >> num1 >> num2;
    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}
// This program calculates the GCD (Greatest Common Divisor) of two numbers using the Euclidean algorithm.
// The gcd function takes two integers a and b as input.
// If b is 0, it returns a as the GCD.
// Otherwise, it recursively calls itself with b and the remainder of a divided by b.   
// In the main function, we prompt the user to enter two numbers, read them, and then call the gcd function.
// Finally, we print the result to the console.
// Example: If the user inputs 48 and 18, the output will be:
// The GCD of 48 and 18 is: 6
// This is because 6 is the largest number that divides both 48 and 18 without leaving a remainder.
// The Euclidean algorithm is efficient and works well for large numbers as well.