#include<iostream>
using namespace std;
#define power(x)((x & (x - 1)) != 0)?0:1


int main() {
    int n = 0;
    cout << " Enter a number: ";
    cin >> n;
    while (cin.fail()) {
        
        cout << "Invalid!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " Enter a number: ";
        cin >> n;
        
    } 
    if (power(n) == 1)
        cout << "yes " << n << " is a power of 2!";
    else
        cout << "no " << n << " is not a power of 2!";

    return 0;


}