#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to check whether its Prime or Not: ";
    cin>>n;
    int a=2,flag=0;
    while (a<n)
    {
       if(n % a==0){
        flag=1;
           break;
       }
       a=a+1;
    if(flag==0){
        cout<<"It's a Prime Number;
        }
    else{
        cout<<"Not a Prime Number";
    }
        return 0;
    }
      
