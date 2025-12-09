#include<iostream>
using namespace std;
int sumdigits(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<sumdigits(1234)<<endl;
    return 0;
}
// This program defines a function sumdigits that calculates the sum of the digits of a given integer n.
// The function initializes a variable sum to 0 and uses a while loop to extract each digit
// of n by taking the modulus with 10. Each extracted digit is added to sum.
// The integer n is then divided by 10 to remove the last digit, and the process
// continues until n becomes 0.
// Finally, the function returns the computed sum of the digits.
// In the main function, we call sumdigits with the value 1234 and print the result.
// Example output:
// sumdigits(1234) returns 10 because 1+2+3+4
// Note: This function works for non-negative integers.
// If you want to handle negative integers, you can take the absolute value of n at the start of the function.

