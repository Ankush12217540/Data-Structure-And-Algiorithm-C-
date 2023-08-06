// Vector
// **Reference: geekForGeeks
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Size-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capaciy-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;
    
    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;
    
    cout<<"before pop: "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"After Pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size: "<<v.size()<<endl;

    }








    /*
    NOTES:

Vectors are the same as dynamic arrays with the ability to resize itself automatically
 when an element is inserted or deleted, with their storage being handled automatically
  by the container.

    Iterators
begin() – Returns an iterator pointing to the first element in the vector
end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
cbegin() – Returns a constant iterator pointing to the first element in the vector.
cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
crend() – Returns a constant reverse iterator pointing to the theoretical ele





Capacity
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements.





Element access
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
    */