//               creating function to calculate sum of n natural number:
#include<iostream>
using namespace std;

int PrintSum(int n){
    int sum=0;
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    return sum;
    
}

int main(){
    int n;
    cout<<"Enter the number till wherer you want to find the counting: ";
    cin>>n;
    PrintSum(n);
    cout<<"The sum of number from 1 to "<<n<<" is "<<PrintSum(n);
return 0;
}
