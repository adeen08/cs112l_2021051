#include<iostream>
#include<string>
using namespace std;

struct person
{
	string name;
	int age;
	string city;
	int day;
	string month;
	int year;
};

struct personList
{
	person personList[3];

	void add()
	{
		int x, y, z;
		string a, b, c;
		cout << "Enter details as follows. " << endl << endl;

		for (int i = 0; i < 3; i++)
		{
			cout<<  endl;
			cout << "Please enter person" << i + 1 << " name: ";
			cin >> a;
			cout << "Please enter their age: ";
			cin >> x;
			cout << "Please enter their city: ";
			cin >> b;
			cout << "Please enter their birth day: ";
			cin >> y;
			cout << "Please enter their birth month: ";
			cin >> c;
			cout << "Please enter their birth year: ";
			cin >> z;

			personList[i].name = a;
			personList[i].age = x;
			personList[i].city = b;
			personList[i].day = y;
			personList[i].month = c;
			personList[i].year = z;
		}
	}

	void today()
	{
		int d, y;
		string m;
		cout << "Please enter today's date" << endl << endl;
		cout << "Day: "; cin >> d;
		cout << "Month: "; cin >> m;
		cout << "Year: "; cin >> y;

		for (int i = 0; i < 3; i++)
		{
			if ((personList[i].day == d) && (personList[i].month == m) && (personList[i].year == y))
			{
				cout << "It is " << personList[i].name << "'s birthday. Happy birthday " << personList[i].name << "!!";
				break;
			}
			else
			{
				cout << "No birthday today.";
			}
		}

	}
};

int main()
{
	person p;
	personList pl;

	pl.add();
	cout << endl << endl;
	pl.today();
	cout << endl << endl;


}
