#include<iostream>
using namespace std;

int sumN(int x){
    int i, sum=0;
    for(i=1;i<=x;i++){
    sum=sum+i;
    }
    return sum;
}
int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(2)<<endl;
    cout<<sumN(3)<<endl;
    cout<<sumN(4)<<endl;
    return 0;
}