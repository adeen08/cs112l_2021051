#include<iostream>
using namespace std;

class parity {
    public:
    int size;
    int* arr;;
    void del();
    void put(int num);
    void display();
    int test();

    parity(){
        size=0;
        arr=new int[size];
    }
    ~parity(){
        cout<<endl<<"Program terminated!";
    }
    
};

void parity::put(int num) {
        size += 1;
        int* temp = new int[size];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        delete[]arr;
        arr = temp;
        arr[size - 1] = num;
        return;
    }
    void parity::del() {
        if (size == 0) {
            cout << "There are no elements!" << endl << endl;
            return;
        }
        size -= 1;
        int* temp = new int[size];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        delete[]arr;
        arr = temp;
        return;
    }
    void parity::display() {
        if (size == 0) {
            cout << "There are no elements!" << endl << endl;
            return;
        }
        cout << "The elements that have been input are: " << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << "  ";
        }
        cout << endl << endl;
        return;
    }
    int parity::test() {
        if ((size % 2) == 0)
            return 1;
        else if ((size % 2) == 1)
            return 0;
    }

int main() {
    int option = 0, num = 0;
    parity p;

    do {
        cout << "Menu:" << endl;
        cout << "1-Put another element " << endl;
        cout << "2-Print all elements that have been put till now " << endl;
        cout << "3-Delete last element that has been added using put " << endl;
        cout << "4-check whether even number of puts have been done " << endl;
        cout << "0-Exit" << endl;
        cout << "Select an option: ";
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
            cout << "Enter the element to be put: ";
            cin >> num;
            while (cin.fail()) {
                cout << "Invalid!";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << " Enter again: ";
                cin >> num;
            }
            p.put(num);
            break;
        case 2:
            p.display();
            break;
        case 3:
            p.del();
            break;
        case 4:
            if (p.test() == 1) {
                cout << "Even no. of puts have been done"<<endl<<endl;
            }
            else if (p.test() == 0) {
                cout << "Odd no. of puts have been done" << endl << endl;
            }
            break;
        case 0:
            break;
        default:
            cout << "Invalid option!";
            break;
        }



    } while (option != 0);


    return 0;
}