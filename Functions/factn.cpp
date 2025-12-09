#include<iostream>
using namespace std;
int fact(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    cout<<fact(5)<<endl;
    cout<<fact(3)<<endl;
    return 0;
}
// This program defines a function fact that calculates the factorial of a given number x.
// The function initializes a variable fact to 1 and uses a for loop to multiply fact by
// each integer from 1 to x.
// Finally, the function returns the computed factorial.
// In the main function, we call fact with the values 5 and 3, printing the results.
// Example outputs:
// fact(5) returns 120 because 5! = 5*4*3*2*1 = 120
// fact(3) returns 6 because 3! = 3*2*1
// Factorial is the product of all positive integers up to a specified number n.
// Note: Factorial of 0 is defined as 1.
