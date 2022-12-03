#include <iostream>
using namespace std;

int CountA(int a)
{
    int countA = 0;
    while (a != 0)
    {
        // checking last bit
        if (a & 1==1)
        {
            countA++;
        }
        a = a >> 1;
    }
    return countA;
}
int CounB(int b)
{
    int countB = 0;
    while (b != 0)
    {
        if (b & 1==1)
        {
            countB++;
        }
        b = b >> 1;
    }
    return countB;
}
int main()
{
    int p, q;
    cout << "Enter any two number p and q respectively: ";
    cin >> q >> q;
    
    cout << "Number of 1 bits in p&q is: " << CountA(p)+CounB(q);
    return 0;
}