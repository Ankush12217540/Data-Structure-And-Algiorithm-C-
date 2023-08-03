// Retruning The square Root of X , decimal part are turncated and only 
// the integer partof the result is returned;

// IT should be done using Binary Search

#include<iostream>
using namespace std;

// function to calclulate squareroot with no precision
int SquareRoot(int n){
    int start=0;
    int end=n;
    int mid=start+ (end-start)/2;
    int ans=0;
    while(start<=end){
    int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            start=mid+1;
        }
            
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    } 
    return ans;
}

// function to add Precision:
double SetPrecision(int n, int precision, int RootNumber){
    double factor=1;
    double ans=RootNumber;
    for(int i=0; i<precision; i++){
        factor=factor/10;
        for(double j=ans; j*j <n ; j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int number=68;
    int root=SquareRoot(number);
    cout<<"The square Root of the number: "<<number<<" is: "<<root<<endl;

    // Now implemention Precision:
    // int newRoot=SetPrecision(number,3,root);
    cout<<"The precised square Root of the number is: "<<SetPrecision(number,3,root);;
    return 0;

}
