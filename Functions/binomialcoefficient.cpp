#include<iostream>
using namespace std;
int factorial(int x){
    if(x <= 1) return 1;
    return x * factorial(x-1);
}
int bino(int n, int r){
    int binomial = factorial(n) / (factorial(r) * factorial(n-r));
    return binomial;
}
int main(){
    cout<<bino(8,2)<<endl;
    return 0;
}
// This program calculates the binomial coefficient "n choose r" using a recursive factorial function. 
// It defines a function 'bino' that computes the binomial coefficient using the formula: n! / (r! * (n-r)!)
// The main function demonstrates the usage by calculating "8 choose 2".
// Output: 28