#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void sortArray(int arr[],int n){
    int step=0;
    int i=0;
    int j=n-1;
    while (i<j){ 
    cout<<"Step "<<step++<<endl;
    printArray(arr,n);
    cout<<endl;
while(arr[i]==0 && i<j){
    i++;
}
        
while (arr[j]==1 && i<j){
    j--;
}
if(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
}
}
cout<<"Printing the Sorted Array:"<<endl;
printArray(arr,8);
cout<<endl;
};

int main(){
    int arr[8]={0,1,0,1,0,1,1,0};
    
    sortArray(arr,8);
    cout<<" Printing Array after function call and sorted array: ";
    printArray(arr,8);
    return 0;
}

