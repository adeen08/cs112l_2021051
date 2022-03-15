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
        while (cin.fail()) {

            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> arr[i];

        }
    }
    while (size != 1) {
        size--;
        int* temp = new int[size];
        int j = 0;
        for (int n = 0; n < size + 1; n++) {
            temp[j] = arr[n + 1] - arr[n];
            j++;
        }
        delete[] arr;
        arr = temp;
        cout << "Resultant Array:";

        for (int n = 0; n < size; n++) {
            cout << arr[n] << " ";
        }
        cout << endl;
    }
    return 0;
}