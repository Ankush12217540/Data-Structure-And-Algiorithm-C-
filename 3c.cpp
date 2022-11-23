//                             FIND SUM FROM 1 TO N:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number till where you want to find sum: ";
    cin>>n;
    int i=1;
    int sum=0;
while(i<=n){
    sum=sum+i;
    i=i+1;
}
cout<<"sum from "<<1 <<" to "<<n<<" = "<<sum;
return 0;

}