#include<iostream>
using namespace std;

int main(){
    int first,second;

    cout<<"Enter the value for first variable: ";
    cin>>first;

    cout<<"Enter the value for second variable: ";
    cin>>second;
    float res1=first/second;

    cout<<"Implicit Type Casting:"<<endl;
    cout<<"Result: "<<res1<<endl<<endl;
    float res2=(float)first/second;
    cout<<"Explicit Type Casting:"<<endl;
    cout<<"Result: "<<res2;
    return 0;
}