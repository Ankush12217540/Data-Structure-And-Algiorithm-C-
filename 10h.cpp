// sort 0,1,2   PROBLEM
// let arr1[9]{0,2,2,1,0,1,1,0,2}
// sorted arr1=[0,0,0,1,1,1,2,2,2]

// let arr2[9]{0,2,2,1,0,1,1,0,2}
// sorted arr2=[0,0,0,1,1,1,2,2,2]

#include<iostream>
using namespace std;

void dnfSort(int arr[],int n){
int low=0;
int mid=0;
int high=n-1;
while(low<=high){
switch(arr[mid]){
    // if element is 0;
    case 0:
    swap(arr[mid++],arr[low++]);
    break;

    // if element is 1:
    case 1:
    mid++;
    break;
    
    case 2:
    swap(arr[mid],arr[high--]);
    break;

}
}
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

int main(){
    int arr1[12]={0,1,2,1,0,1,1,0,2,2,0,1};
    int arr2[12]={1,2,0,0,2,1,1,0,2,1,0,1};
    // printArray(arr1,12);
    dnfSort(arr1,12);
    printArray(arr1,12);
    // cout<<endl;
    // printArray(arr2,12);
    // dnfSort(arr2,12);
}


// if else can be also be used in case of switc case
