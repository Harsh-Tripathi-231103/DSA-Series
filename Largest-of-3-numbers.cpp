#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c; 
    if(a>b && a>c){
        cout<<"Largest number is: "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"Largest number is: "<<b<<endl;
    }
    else if(c>a && c>b){
        cout<<"Largest number is: "<<c<<endl;
    }
     else if (a == b && a > c) {
        cout << "Largest numbers are equal: " << a << " and " << b << endl;
    }
    else if (a == c && a > b) {
        cout << "Largest numbers are equal: " << a << " and " << c << endl;
    }
    else if (b == c && b > a) {
        cout << "Largest numbers are equal: " << b << " and " << c << endl;
    }
    else{
        cout<<"All numbers are equal."<<endl;
    }
    return 0;
}