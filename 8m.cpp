#include<iostream>
using namespace std;

// 1-->Prime number
// 0-->Not a Prime number
bool isPrime(int n){
    int flag=0;
    for (int i = 2; i < n; i++)
    {
        if(n %i==0){
            // divide ho gaya,not a prime number;
            return 0;
        }
    }
    return 1;
    
}
int main(){
    int n;
    cout<<"Enter any number to predict whether its prime or not: ";
    cin>>n;

    if(isPrime(n)){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not a Prime Number"<<endl;
    }
return 0;
}