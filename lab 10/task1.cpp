#include<iostream>
using namespace std;

int main(){
    int first,second,third;
    char fourth,fifth;

    cout<<"Enter the value for first variable: ";
    cin>>first;

    cout<<"Enter the value for third variable: ";
    cin>>third;

    cout<<"Enter the value for fourth variable: ";
    cin>>fourth;

    cout<<"Enter the value for fifth variable: ";
    cin>>fifth;

    cout<<"First variable: "<<first<<endl;
    second=first;
    cout<<"second variable: "<<second<<endl;
    int temp1=third+fourth;
    cout<<"Type casting char to int data type (Third + Fourth) ="<<temp1<<endl;
    float temp2=third+fifth;
    cout<<"Type casting from int data to float type (Third + fifth): "<<temp2;




    return 0;
}