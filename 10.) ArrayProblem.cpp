// Finding Unique element of the Array

// First-Method( for loop- if else---> using chatgpt)
/*
#include<iostream>
using namespace std;

int RetunUnique(int arr[], int size){
    int unique = -1;
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            unique = arr[i];
            break;
        }
    }
    return unique;
}

int main(){
    int size;
    cout<<"Enter the size of the Array: ";
    cin>>size;
    int arr[size];
    cout<<endl;
    cout<<"Enter the Element of the array: "<<endl;
    for( int i=0; i<size; i++){
        cout<<" Enter the element of index "<<i<<": ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<" Printing the main Array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"  ";
    }
    int uniqueNum = RetunUnique(arr,size);
    if (uniqueNum != -1) {
        cout<<"\nThe unique element of the array is: "<<uniqueNum<<endl; 
    } else {
        cout<<"\nThere is no unique element in the array."<<endl; 
    }
    return 0;
}
*/



// Second method:( using XOR OPERATOR)
/*

int findingUnique(int *arr, int size){
    int ans=0;
    for( int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}

*/
