#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the given number to find whether its Prime or not: "<<endl;
    cin>>n;
    int k;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
        //   cout<<"Not a Prime"<<endl;
        k=3;
          break;
        }

        i=i+1;
    }
    if (k==3)
    {
       cout<<"Not a Prime";
    }
    else{
        cout<<"Its a Prime Number";
    }
    return 0;
}