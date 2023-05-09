#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of of this array: ";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //min-max logic:
    
    int MinValue=arr[0];
    int MaxValue=arr[0];

    
    for (int i = 0; i < n; i++)
    {
        //max-element
        if (arr[i]>MaxValue)
        {
            MaxValue=arr[i];
        }

        //min-value
        if (arr[i]<MinValue)
        {
            MinValue=arr[i];
        }
        
        
    }
    cout<<"Maximum value of an array is :"<<MaxValue<<endl;
    cout<<"Minimum value of an array is:  "<<MinValue<<endl;
    

return 0;
}
