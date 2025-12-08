#include<iostream>
using namespace std;
int main(){
    int a=0, b=1;
    int n;
    cout<<"Enter the number of terms in Fibonacci series"<<endl;
    cin>>n; 
    cout<<"Fibonacci series upto "<<n<<" terms is:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return 0;
}
// This program generates the Fibonacci series up to N terms.
// The Fibonacci series starts with 0 and 1, and each subsequent term is the sum of the two preceding ones.
// We initialize two variables, a and b, to represent the first two terms of the series.
// We then prompt the user to enter the number of terms they want in the series.
// The for loop iterates from 1 to n, printing the current term (a) in each iteration.
// Inside the loop, we calculate the next term by adding a and b, then update a
// to be b and b to be the next term.
// Example: If the user inputs 7, the output will be:
// Fibonacci series upto 7 terms is:
// 0
// 1        
// 1
// 2
// 3
// 5
// 8
// This is because the first 7 terms of the Fibonacci series are 0, 1, 1, 2, 3, 5, and 8.
