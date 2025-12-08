#include<iostream>
using namespace std;
int gcd(int a, int b) {
    // Base case: if b is 0, then gcd is a
    if (b == 0)
        return a;
    // Recursive case: call gcd with b and the remainder of a divided by b
    return gcd(b, a % b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);

}
int main() {
    int num1, num2;
    cout << "Enter two numbers to find their GCD:" << endl;
    cin >> num1 >> num2;
    int result = lcm(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}
// This program calculates the LCM (Least Common Multiple) of two numbers using the relationship between GCD and LCM.
// The gcd function takes two integers a and b as input.
// If b is 0, it returns a as the GCD.
// Otherwise, it recursively calls itself with b and the remainder of a divided by b.
// The lcm function calculates the LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b).
// In the main function, we prompt the user to enter two numbers, read them, and then call the lcm function.
// Finally, we print the result to the console.
// Example: If the user inputs 4 and 5, the output will be:
// The LCM of 4 and 5 is: 20
// This is because 20 is the smallest number that is a multiple of both 4 and 5.
// The relationship between GCD and LCM helps in efficiently calculating the LCM using the already defined GCD function.
