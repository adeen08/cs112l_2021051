#include<iostream>
using namespace std;

class swapp{
    public:
    void setter(){
        cout << "enter first integer: ";
        cin >> a;
        while (cin.fail()) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> a;
        }
        cout << "enter second integer: ";
        cin >> b;
        while (cin.fail()) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> b;
        }
    }
    void swapint(){
        a=a*b;
        b=a/b;
        a=a/b;

    }
    void display(){
        cout<<endl<<"After swap:"<<endl<<"The first integer is: "<<a<<endl;
        cout<<"The second integer is: "<<b<<endl;
    }


    private:
    int a;
    int b;
};

int main(){
    swapp s;
    s.setter();
    s.swapint();
    s.display();

    return 0;
}