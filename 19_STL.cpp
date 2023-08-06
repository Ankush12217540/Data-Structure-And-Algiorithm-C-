// STADANRD TEMPLATE LIBRARY

// Dynamic Array


#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3]={1,2,3};
    arr<int,4>a={1,3,4,5,6};
    int size=a.size();

    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
    
    cout<<"Element at 2nd index -> "<<a.at(2)<<endl;
    cout<<"Empty or not"<<a.empty()<<endl;
    cout<<"Fist Element->"<<a.front()<<endl;
    cout<<"last Element->"<<a.back()<<endl;
}
