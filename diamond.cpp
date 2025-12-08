#include<iostream>
using namespace std;
int main(){
    //upper half of diamond
    int n;
    for(n=1;n<=5;n++){
        for(int space=1;space<=(5-n);space++){
            cout<<" ";
        }
        for(int star=1;star<=(2*n-1);star++){
            cout<<"*";
        }
        cout<<endl;
    }
    //lower half of diamond
    for(n=4;n>=1;n--){
        for(int space=1;space<=(5-n);space++){
            cout<<" ";
        }
        for(int star=1;star<=(2*n-1);star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// This program prints a diamond pattern of stars.
// The first part of the program prints the upper half of the diamond.
// The outer loop iterates through each row from 1 to 5.
// The first inner loop prints the required spaces before the stars in each row.
// The second inner loop prints the stars in each row, where the number of stars is given by the formula (2*n - 1).
// The second part of the program prints the lower half of the diamond.
// The outer loop iterates through each row from 4 down to 1.
// The inner loops function similarly to the upper half, printing spaces and stars accordingly.