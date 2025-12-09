#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int largestDigit = 0;
    while(n>0){
        int lastDigit = n % 10;
        if(lastDigit > largestDigit){
            largestDigit = lastDigit;
        }
        n = n / 10;
    }
    cout<<"Largest digit is "<<largestDigit<<endl;
    return 0;
}
// This program finds the largest digit in a given integer.
// It repeatedly extracts the last digit of the number and compares it with the current largest digit found
// until all digits have been processed.
// The final largest digit is then printed to the console.
// Example: If the input number is 5732, the output will be 7.
// The program uses basic arithmetic operations and a while loop to achieve this functionality.
