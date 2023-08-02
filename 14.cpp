// FINDING PIVOT IN AN ROTATED ARRAY

#include<iostream>
using namespace std;

int getPivot(int arr1[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr1[mid]>=arr1[0]){
            s=s+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}


int main(){
    int arr1[5]={3,8,17,1,2};
    cout<<arr1;
    cout<<"The Pivot in the array: "<<arr1<<"is at index: "<<getPivot(arr1,5)<<endl;
}
