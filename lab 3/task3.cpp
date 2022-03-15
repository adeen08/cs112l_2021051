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
    int* temp1 = new int[size];
    int* temp2 = new int[size];
    int j = 0, k = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            temp1[j] = arr[i];
            j++;
        }
        else if (arr[i] < 0) {
            temp2[k] = arr[i];
            k++;
        }
    }
    for (int i = 0; i < j; i++) {
        arr[i] = temp1[i];

    }
    int x = 0;
    for (int i = j; i < size; i++) {
        if (x < k) {
            arr[i] = temp2[x];
            x++;
        }
    }
    cout << "your array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}