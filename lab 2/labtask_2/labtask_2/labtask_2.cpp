#include <iostream>
using namespace std;
#define eq(n1,n2)(n1*power(2,n2))
int power(int x, int y) {
    if (y == 1)
        return x;
    else
        return x * power(x, y - 1);
}
int main()
{
    int n1, n2;
    cout << " Enter number 1: ";
    cin >> n1;
    while (cin.fail()) {

        cout << "Invalid!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " Enter a number: ";
        cin >> n1;

    }
    cout << " Enter number 2: ";
    cin >> n2;
    while (cin.fail()) {

        cout << "Invalid!";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << " Enter a number: ";
        cin >> n2;
    }
    cout << endl << eq(n1, n2);
    return 0;
}
