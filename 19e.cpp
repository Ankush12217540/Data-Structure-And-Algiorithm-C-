//                   ----QUEUE----\
// first in first out.. principle


#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");

    
    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;

}
