//            ---STACK----

/*
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working,
 where a new element is added at one end (top) and an element is removed from that end only. 
  Stack uses an encapsulated object of either vector or 
  deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 

If there is confusion in remembering the basic difference between stack and queue, 
then just have a real life example for this differentiation, for stack, stacking of books we can take the top book easily 
and for queue remember when you have to stand in queue front of ATM for taking out the cash, then first person near to ATM
 has the first chance to take out the money from ATM. So, queue is the FIFO (First In First Out) type working.
*/
# include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("Ankush");
    s.push("Kumar");
    s.push("Yadav");


    cout<<"Top Element -> "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element->"<<s.top()<<endl;

    cout<<"size of stack: "<<s.size()<<endl;

    cout<<"Empty or Not: "<<s.empty()<<endl;
}


