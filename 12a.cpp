// First and Last Occurence of an Element in the sorted Array:

// arr[11]={1,2,3,3,3,3,4,5,6,7,9}
// first occurence at index:2,  last occurence at index:5
#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int firstOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2 ;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            end=mid-1;
             ans=mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
        // return mid;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid= (start+end)/2 ;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            start=mid+1;
            ans=mid;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid= (start+end)/2;
        // return mid;
    }
    return ans;
}

int main(){
    int arr[14]={1,2,3,3,3,3,3,3,3,4,5,6,7,9};
    printArray(arr,14);
    cout<<endl;
    // lastOcc(arr,11,3);
    cout<<"The first occurence of 3 is at index : "<<firstOcc(arr,14,3)<<endl;
    cout<<"The last occurece of 3 is at index : "<<lastOcc(arr,14,3)<<endl;
    cout<<"The number of element of 3 in the array is : "<<lastOcc(arr,14,3)-firstOcc(arr,14,3)+1;
}
