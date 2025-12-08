#include<iostream>
using namespace std;
// function to calculate power of a number
int power(int base, int expo)
    {
        int ans=1; 
        for(int i=1;i<=expo;i++){
            ans=ans*base;
        }
        return ans;
    }
    int main(){
        int N;
        cout<<"Enter the number"<<endl;
        cin>>N;
        int original = N;
        // step 1: calculate number of digits
        // step 2: extract each digit and calculate power of digit with number of digits
        int numDigits=0;
        int temp=N;     
        while(temp>0){
            numDigits++;
            temp=temp/10;
        }
        // step 3: add all the powered digits
        int sum=0;
        temp=N;         
        while(temp>0){
            int lastDigit = temp%10;
            sum = sum + power(lastDigit,numDigits);
            temp = temp/10;
        }
         // step 4: compare the sum with original number
        if(sum==original){
            cout<<original<<" is an Armstrong number"<<endl;
        }
        else{
            cout<<original<<" is not an Armstrong number"<<endl;
        }        
        return 0;
    }

