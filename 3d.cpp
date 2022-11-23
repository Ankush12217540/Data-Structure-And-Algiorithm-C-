//           FINDING SUM OF ALL EVEN NUMBER
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number till where you want to find sum of its even terms: ";
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
            i=i+1;
        }
        cout<<"sum of Even number from 1 to 8 is: "<<sum;
    }
    
    return 0;
    
}