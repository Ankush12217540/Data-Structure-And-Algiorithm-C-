//   REVERSE AN ARRAY
#include<iostream>
using namespace std;

void Reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while (start<=end)
    {
       swap(arr[start],arr[end]);
       start++;
       end--;
    }
    
}
   
int printArray(int arr[], int size){
    for (int i = 0; i <size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int array_size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>array_size;
    int arrInMain[100];
     cout<<" Enter the element of the array: ";
    for (int i = 0; i <array_size ; i++)
    {
        cin>>arrInMain[i];
        cout<<" ";
    }

    //Printing the array using function:
    cout<<"The main array is: "<<printArray(arrInMain,array_size);

    cout<<endl;
    
    cout<<"The reverse array of the actual array is:";
    Reverse(arrInMain,array_size);
    cout<<printArray(arrInMain,array_size);
return 0;
}
