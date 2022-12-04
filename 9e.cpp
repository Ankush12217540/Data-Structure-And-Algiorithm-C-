#include<iostream>
using namespace std;
int ArraySum(int array[],int a){
    cout<<"Entering into the function: "<<endl;
    int sum=0;
    for (int i = 0; i < a; i++)
    {
        sum=sum+array[i];
    }
    return sum;
    
}

int main(){
    int n;
    cout<<"Enter the size of the arrray: ";
    cin>>n;
    int arr[n];
    
     cout<<"Provide elements to the array: "<<endl;
     for (int i = 0; i < n; i++)
     {
        cin>>arr[i];
        cout<<" ";
     }
     
     cout<<"The sum of the array = "<<ArraySum(arr,n);

     
return 0;
}