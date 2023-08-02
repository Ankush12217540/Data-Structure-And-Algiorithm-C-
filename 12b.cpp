// MOUNTAIN OF AN ARRAY PROBLEM:
// int arr[8]={1,2,3,4,5,6,7,1}      --->ans: 7

# include<iostream>
using namespace std;

int mountainArr(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    // int ans=-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return mid;
}   

int main(){
    int arr[8]={1,2,3,4,5,6,7,1};
    mountainArr(arr,8,7);
    cout<<"The index of the mountain of the given array is:"<<mountainArr(arr,8,7);

}
