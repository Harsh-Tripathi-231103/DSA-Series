#include<iostream>
using namespace std;
int main(){
    int i,number, sum=0;
    cout<<"enter the value of first n numbers"<<endl;
    cin>>number;
    for(i=1;i<=number;i++){
        sum=sum+i;   
    }
    cout<<"sum of first "<<number<<" numbers is: "<<sum<<endl;
    return 0;
}
// in this i have to print sum taht is why i ahve taken a sum variable initialized as 0, so to begin with.
// number is the limit upto which we have to sum the numbers.
// sum = 1+0 =1, sum=2+1=3, sum=3+3=6,sum=4+6=10,sum=5+10=15.....
// sum ka print statement loop ke bahar hoga kyuki hume final sum print karna hai.