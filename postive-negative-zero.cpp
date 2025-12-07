#include<iostream>
using namespace std;
int main(){
int number;
cout<<"enter a number"<<endl;
cin>>number;
// -5,-4,-3,-2,-1------------0------------1,2,3,4,5
if(number>-0){
    cout<<"Number is positive"<<endl;
}
else if(number<0){
    cout<<"Number is negative"<<endl;
}
else{
    cout<<"Number is zero"<<endl;

}
    return 0;
}