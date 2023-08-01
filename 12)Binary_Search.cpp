// Binary Search Example
// Finding Index uisng Binary Search and reducing time complexity

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<=size; i++){
        cout<<arr[i]<<"  ";
    }
}
int binarySearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        // go to right wala part
        if(key>arr[mid]){
            start=mid+1;
        }
        // left wala part
        else{
            // key<arr[mid]
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1 ;
}


int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int oddIndex=binarySearch(odd,5,14);
    int evenIndex=binarySearch(even,6,8);
    cout<<"The index of 14 in odd array is: "<<oddIndex<<endl;
    cout<<"The index of 8 in even array is: "<<evenIndex<<endl;
}
// take care:
/*
int max value is 3^32 -1;
so mid value((start+end)/1) shouldnt excees int max value
alternatively it should be written as:
" (start+(end-start)/2)"
*/