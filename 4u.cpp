#include <iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while(j<=(i-1)){
            cout<<" ";
            j=j+1;
        }
        int k=1;
        while(k<=(n-i+1)){
            cout<<i;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}