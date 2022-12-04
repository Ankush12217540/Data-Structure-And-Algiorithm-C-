//                 USING FUNCTION TO PRINT ARRAY:
#include<iostream>
using namespace std;


// HOLD:
void printArray(int arr[],int size){
    cout<<"Printing an Array using FUNCTION "<<endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing DONE "<<endl;
    
}

int main(){
     // DECLARING AN ARRAY
    int number[15];

    //ACCESSING AN ARRAY
    cout<<"The value at index 14: "<< number[14] <<endl;
           //--->This will give any garbage value as value in array is not initiliazed;

    // cout<<"Value at 20 index is "<<number[20]; ---->This will give error as size of an array is ony 15



    // INITILISING AN ARRAY:
    int second[3]={5,7,11};
    // ACCESSING AN ELEMENT
    cout<<"value at 2 index in SECOND array is: "<<second[2]<<endl;



    int third[15]={2,7};
    int n=15;
    printArray(third,16);
    



    //initilising all location with 0;
    int fourth[10]={0};      // This will only work for 0'
    n=10;
    printArray(fourth,12);


    // initilising all location with certain value:
    int fifth[28]={2};
    n=28;
    for(int i=0; i<n;i++){
        fifth[i]=3;
    }
   printArray(fifth,5);


return 0;
}