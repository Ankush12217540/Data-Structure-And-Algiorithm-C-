// Creating Function to Print number from 1 to n:
#include<iostream>
using namespace std;

 void PrintCount(int n){
    for (int i = 1; i<= n; i++)
    {
        cout<<i;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number till where you want to perform countin:  ";
    cin>>n;
    PrintCount(n);
    cout<<"Counting from 1 to "<<n<<" is "<<endl;
    PrintCount(n);
    return 0;
}