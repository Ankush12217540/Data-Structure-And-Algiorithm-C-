#include <iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"Enter the value of a and b respectively: "<<endl;
   cin>>a>>b;
   cout<<"If Value of a is "<<a<<endl;
   cout<<"And If the value of b is "<<b<<endl;
   cout<<"Then:"<<endl;
   cout<<" a & b  ="<<(a&b)<<endl;
   cout<<" a | b  ="<<(a|b)<<endl;
   cout<<" ~a  ="<<(~a)<<endl;
   cout<<" a^b  ="<<(a^b)<<endl;  // If differet bits-->1  ; IF same bits-->0;
    return 0;
}