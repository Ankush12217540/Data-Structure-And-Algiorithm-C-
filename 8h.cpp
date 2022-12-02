//                         Creating AN EVEN OR ODD FUNCTION:
#include <iostream>
using namespace std;

// 1-->Even
// 0-->Odd
bool isEven(int a)
{
    //odd:
    if(a&1){
        return 0;
    }
    /*
    else{
        return 1;
    }
    */ 
   return 1;
}
int main()
{
    int num;
    cout<<"Enter any number to check whether its Even or odd: ";
    cin>>num;
    if(isEven(num)){
        cout<<"number is Even"<<endl;
    }
    else{
        cout<<"Number is Odd"<<endl;
    }
    return 0;
}