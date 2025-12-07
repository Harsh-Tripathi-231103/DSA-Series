#include<iostream>
using namespace std;
int main(){
    int i,n,mul;
    cout<<"enter a number to print its table"<<endl;
    cin>>n;
    for(i=1;i<=10;i++){
        mul=n*i;
        cout<<n<<"*"<<i<<"="<<mul<<endl;
    }
    return 0;
}
// yaha pe i ki ending point ko 10 isliye kiya hai kyuki hume table 1 se 10 tak print karna hai.
// mul variable is used to store the multiplication result of n and i.
// mul=n*i; means for each iteration we are multiplying n with i and storing the result in mul variable.
// finally we are printing the table in the format n*i=mul.
// example: if n=5, then the output will be:
// 5*1=5
// 5*2=10
// 5*3=15
// ...// 5*10=50