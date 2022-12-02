#include<iostream>
using namespace std;

int main(){
    int total,no_of_notes;
    cout<<"Enter the Total Amount "<<endl;
    cin>>total;
    
    cout<<"Enter the number of notes: "<<endl;
    cin>>no_of_notes;

    switch (no_of_notes){
        int a,b,c,d;

        case 100:
        cout<<"Total no. of notes of 100 Rupees are " <<(total/100)<<endl;
        a=100*(total/100);  // a=total amount of 100 rupees notes:

        case 50: cout<<"Total number of 50 rupees notes are "<<(total-a)/50<<endl;
        b=50*((total-a)/50); // b=total amount of 50 rupees notes

        case 20: cout<<" Total number of 20 rupees notes are "<<(total-a-b)/20<<endl;
        c=20*((total-a-b)/20);    // c=total amount of 20 rupees notes;

        case 1: cout<<"Total number of 1 rupees notes are "<<(total-a-b-c)<<endl;
        }
    return 0;
}