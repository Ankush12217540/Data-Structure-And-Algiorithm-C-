//Priority Queue

// In this Data structure, we always fetch either max or min of the value from the heap
// By default greatest element is fetched


#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // Writing format of max heap (priority queue)
    priority_queue<int> maxi;

    // min-heap (writing format)
    priority_queue<int ,vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"size-> "<<maxi.size()<<endl;

    int n=maxi.size();

    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    } cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout<<"size-> "<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;


    cout<<"khaali h kya bhai ??  "<<mini.empty()<<endl;;
}










/*
         ---Priority Queue---

A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).



In C++ STL, the top element is always the greatest by default. We can also change it to the smallest element at the top. Priority queues are built on the top of the max heap and use an array or vector as an internal structure. In simple terms, STL Priority Queue is the implementation of Heap Data Structure.


*/
