#include<iostream>
using namespace std;

class person {
    int ID;
    string username;

public:
    static int count;
    person() {
        ID = 0;
        username = "";
    }
    ~person() {}
    friend istream& operator>>(istream& input, person& p) {
        cout << "Enter Name and ID:";
        input >> p.username;
        input >> p.ID;
        return input;
    }
    friend ostream& operator<<(ostream& output, person p) {
        output << "username: " << p.username << endl << "Id: " << p.ID << endl;
        return output;
    }
};
int person::count = 0;

class date {
    friend class person;
    int day;
    int month;
    int year;
public:
    date() {
        day = 0;
        month = 0;
        year = 0;
    }
    friend istream& operator>>(istream& input, date& d) {
        cout << "Enter joining date (yyyy mm dd): ";
        input >> d.year;
        input >> d.month;
        input >> d.day;
        return input;
    }
    friend ostream& operator<<(ostream& output, date d) {
        output << "Joining Date is: " << d.day << "-" << d.month << "-" << d.year;
        return output;
    }
    ~date() {}
    bool operator <(const date& d) {
        if (year < d.year) {
            return true;
        }
        else if (year == d.year && month < d.month) {
            return true;
        }
        else if (year == d.year && month == d.month && day < d.day) {
            return true;
        }
        else
            return false;
    }

};



int main() {
    person p1, p2;
    date d1, d2;
    cout << "Person No. " << p1.count + 1 << " data" << endl;
    cin >> p1;
    cin >> d1;
    p1.count++;
    cout << "Person No. " << p1.count + 1 << " data" << endl;
    cin >> p2;
    cin >> d2;
    p1.count++;
    cout << endl;
    cout << p1 << endl <<d1<< endl;
    cout << endl;
    cout << p2 << endl <<d2<< endl;


    if (d1 < d2) {
        cout << "Person 1 is senior to person 2";
    }
    else
        cout << "Person 2 is senior to person 1";
    return 0;
}