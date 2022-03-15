#include<iostream>
using namespace std;

int main() {
    int size = 0;
    cout << "enter size of array: ";
    cin >> size;
    while (cin.fail() || size < 0) {

        cout << "Invalid!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " Enter again: ";
        cin >> size;

    }
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << i + 1 << ":";
        cin >> arr[i];
        while (cin.fail() || arr[i] < 0) {

            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> arr[i];

        }
    }
    
    int largest = arr[0], seclargest = 0, smallest = arr[1], secsmallest = 0;
    for (int i = 0; i < size ; i++) {
        
            if (arr[i] > largest) {
                seclargest = largest;
                largest = arr[i];
            }
        
    }
    for (int i = 0; i < size; i++) {
            if (arr[i]<smallest) {
                secsmallest = smallest;
                smallest = arr[i];
            }
        
    }
    cout << "Second Lowest: " << secsmallest << endl;

    cout << "Second Highest: " << seclargest << endl;
    return 0;
}