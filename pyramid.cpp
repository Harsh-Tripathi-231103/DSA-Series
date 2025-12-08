#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        // print spaces
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        // print stars
        for(int k=1;k<=(2*i-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// This program prints a pyramid pattern of stars based on the number of rows input by the user.
// The outer loop iterates through each row from 1 to n.
// The first inner loop prints the required spaces before the stars in each row.    
// The second inner loop prints the stars in each row, where the number of stars is given by the formula (2*i - 1).
// After printing spaces and stars for each row, we move to the next line.
// Example: If the user inputs 5, the output will be:
//     *
//    ***
//   *****
//  *******
// *********
// This forms a centered pyramid of stars with 5 rows.