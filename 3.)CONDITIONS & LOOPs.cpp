#include <iostream>
using namespace std;

  // DIFFERENT PATTERNS USING WHILE LOOP
int main()
{
    int n;
    cout << "Enter the no of rows till where the \n pattern should be follwed:" << endl;
    cin >> n;
    int i = 1;

    while(i<=n){
        int j=1;
        while(j<+n){
            cout<<"*";
            j=j+1; 
        }
        cout<<endl;
        i=i+1;
    }


/*
    while(i<=n){
        int j=1;
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/

/*
    while(i<=n){
        int j=1;
        char start='A'+n-i;
        while(j<=i){
            cout<<start;
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/

/*
    while(i<=n){
        int j=1;
        while(j<=i){
            char c='A'+n-i+j-1;
            cout<<c;
            c=c+1;
            j=j+1;

        }
        cout<<endl;
        i=i+1;
         }
*/

/*
    while(i<=n){
        int j=1;
        while(j<=i){
            char c='A'+i-1;
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/

/*
    while(i<=n){
        int j=1;
        while(j<=i){
            char c='A'+i+j-2;
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
*/
    /*
    char value ='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */


    /*
    while(i<=n){
    int j=1;
    while(j<=i){
        char c='A'+i-1;
        cout<<c;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}
*/


    /* 
    while(i<=n){
        int j=1;
        while(j<=n){
            char c='A'+i+j-2;
            cout<<c;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
            }

            */

    /*
    char start = 'A' ;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {  
            cout <<start;
            start=start+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */

    /*
    while(i<=n){
        int j=1;
        j=1;
        while(j<=n){
            char c= 'A'+j-1;
            cout<< c ;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */
}