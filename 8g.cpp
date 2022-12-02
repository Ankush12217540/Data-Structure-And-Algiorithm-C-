//    CALCULATING "A number raised to the power to the something" using USER DIFINED FUNCTIONS:
#include<iostream>
using namespace std;
int power(int a , int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter base ";cin>>a; cout<<"Enter the power: "; cin>>b;
    power(a,b);
  cout<<"The number "<<a<<" raised to the power: "<<b<<" is "<<power(a,b)<<endl;
return 0;
}