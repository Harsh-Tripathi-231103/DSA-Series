#include<iostream>
using namespace std;
int main(){
    int i, n;
    int fact=1;
    cout<<"enter a number to compute factorial"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of first "<<n<<" numbers is "<<fact;

    return 0;
}
// factorial means 4! = 4*3*2*1=24
// here fact variable is initialized as 1 because if we initialize it with 0 then the result will always be 0, as 0*0=0
// n is the number whose factorial we have to compute
// i is the loop variable which will run from 1 to n
// fact=fact*i; means fact=1*1=1, fact=1*2=2, fact=2*3=6, fact=6*4=24.... and so on
// finally we will print the value of fact which will be the factorial of n