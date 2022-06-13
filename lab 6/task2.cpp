#include <iostream>
#include<string>
using namespace std;

class officer{
int ID;
string name,rank;
static int count;

public:
void setter(){
    cout << "Enter the id of officer: ";
    cin >> ID;
    while (cin.fail()||ID<=0) {
        cout << "Invalid!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " Enter again: ";
        cin >> ID;
    }
    cout << "Enter the name of officer: ";
    cin >> name;
   
    cout << "Enter the rank of officer: ";
    cin >> rank;

    int rev,temp,digit;
    temp=ID;
    while(temp!=0){
        digit=temp%10;
        rev=(rev*10)+digit;
        temp/=10;
    }
    if(ID==rev){
        cout<<"the officer is allowed to enter the restricted area"<<endl;
        count++;
    }
    else
        cout<<"the officer is not allowed to enter the restricted area"<<endl;

}
void getter(){
    cout<<"the total number of officers that have entered the restricted area is: "<<count;
}
};
int officer::count=0;
int main(){
    int option;
    officer o;
    do{
        cout <<endl<<endl<< "PLease select the desired option:" << endl;
        cout << "1-Enter the ID of the officer" << endl;
        cout << "2-Get total number of officers " << endl;
        cout << "3-exit " << endl;
        cin >> option;
        while (cin.fail()) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> option;
        }
        switch (option) {
        case 1:
            o.setter();
            break;

        case 2:
            o.getter();
            break;
        case 3:
            break;
        default:
            cout<<"Invalid option"<<endl<<endl;
            break;            
        }
    }while(option!=3);

    return 0;
}


