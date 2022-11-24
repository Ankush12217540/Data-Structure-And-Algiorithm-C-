#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check whether its Prime or Not: ";
    cin>>n;
    int a=2;
    while (a<n)
    {
       if(n % a==0){
        cout<<"Not a Prime Number";
       }
       a=a+1;
    }
    cout<<"It's a Prime Number";
    return 0;
}