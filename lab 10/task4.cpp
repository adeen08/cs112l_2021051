#include<iostream>
using namespace std;
void print (int * number) {
    cout<<"Number= "<<*number<<endl;
    cout<<"The value of ptr cast: "<<*number*10<<endl;
}

int main(){
    int number;

    cout<<"Enter the number: ";
    cin>>number;

    const int* ptr=&number;
    print ( const_cast<int*> (ptr) ); 
    return 0;
}