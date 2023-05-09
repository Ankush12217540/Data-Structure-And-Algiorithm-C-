//                   MAXIMUM AND MINUMUM OF AN ARRAY:
#include<iostream>
using namespace std;
int getMin(int num[],int n){
    int min= num[0];
    for (int  i = 0; i <n; i++){
            if (num[i]<min)
    {
        min=num[i];
    }
    
    }
    // returning max value
    return min;
    
}
int getMax(int num[],int n){
    int max= 2;
    for (int  i = 0; i <n; i++){
            if (num[i]>max)
    {
        max=num[i];
    }
    
    }
    // returning max value
    return max;
    
}


int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
//    int num[size];    ---->Taking variable as size of an array is considered as bad practise
int num[100];
cout<<"Enter the element of array: ";
for (int i = 0; i <size; i++)
{
     cin>>num[i];
}

cout<<"The maximum value the array is: "<<getMax(num,size)<<endl;
cout<<"The minimum value the array is: "<<getMin(num,size);

return 0;
}
