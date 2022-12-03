#include<iostream>
using namespace std;
int ApTerm(int n){
    return (3*n)+7;
}

int main(){
    int num;
    cout<<"Enter the value of n: ";
    cin>>num;
    cout<<"The Nth term in )3*n +7) is : "<<ApTerm(num)<<endl;

return 0;
}