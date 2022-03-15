#include<iostream>
using namespace std;

class heater{
    int temperature;
    public:
        heater(){
            temperature=15;
            
        }

        void warmer(){
            temperature+=5;
            return;
        }
        void cooler(){
            temperature-=5;
            return;
        }
        void accessor(){
            cout<<"Temperature = "<<temperature<<endl<<endl;
            return;
        }
        ~heater(){
        cout<<endl<<"Program terminated!";
        }
};


int main(){
    int option=0;
    heater h;
    do{
        cout<<"Menu:"<<endl;
        cout<<"1-Show the set temperature "<<endl;
        cout<<"2-Increase the temperature "<<endl;
        cout<<"3-Decrease the temperature "<<endl;
        cout<<"0-Exit"<<endl;
        cout<<"Select an option: ";
        cin>>option;
        while (cin.fail()) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> option;
        }
        switch (option) {
        case 1:
           h.accessor();
           break;
        case 2:
           h.warmer();
           break;
        case 3:
           h.cooler();
           break;
        case 0:
            break;
        default:
            cout << "Invalid option!";
            break;
        }



    }while(option!=0);


    return 0;
}