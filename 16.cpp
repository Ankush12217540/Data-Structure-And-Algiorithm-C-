// Selection Sorting
// it has different round || passses
// in each round , select smallest element and usko right jagah par place karna hain

# include<iostream> 
using namespace std;

void selectionSort(vector<int> &arr, int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]< arr[mainIndex]){
            minIndex=j;
            };
        };
        swap(arr[minIndex], arr[i]);
    };
}


int main(){
    int arr[5]={2,3,1,4,6};
    cout<<"The Selection sort of the array: "<<arr<<" is: ";
}
