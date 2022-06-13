#include<iostream>
using namespace std;

int main(){
    double length,bredth;

    cout<<"Enter the length of rectangle: ";
    cin>>length;

    cout<<"Enter the bredth of rectangle: ";
    cin>>bredth;

    cout<<"Int:"<<endl;
    int temp1 =static_cast<int>(length*bredth);
    cout<<"The area of the rectangle is: "<<temp1<<endl<<endl;

    cout<<"Float:"<<endl;
    float temp2 =static_cast<float>(length*bredth);
    cout<<"The area of the rectangle is: "<<temp2<<endl<<endl;

    return 0;
}