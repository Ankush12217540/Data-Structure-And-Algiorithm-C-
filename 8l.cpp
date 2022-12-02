#include<iostream>
using namespace std;

float isPrime(int n){
    int flag=0;
    for (int i = 2; i < n; i++)
    {
        if(n %i==0){
            // divide ho gaya,not a prime number;
            flag=1;
            break;
        }
    }
    if (flag==0){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"NOT a Prime number"<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter any number to predict whether its prime or not: ";
    cin>>n;
    cout<<"The given number is  : "<<isPrime(n);
return 0;
}