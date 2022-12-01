//                       FUNCTIONS
#include<iostream>
using namespace std;

int main(){
    // pow(a,b)
    int a,b;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    cout<<"Base to the power is: "<<ans<<endl;
return 0;
}