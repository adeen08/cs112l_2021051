#include<iostream>
#include<string>
using namespace std;

struct student
{
	string name;
	string regNo;
	string degree;
	int courses;
	float sgpa;
};

struct studentList
{
	student studentList[3];

	void add_student()
	{
		string s, r,d;
		for (int i = 0; i < 3; i++)
		{
			cout << "Please enter Student name: " << endl;
			cin >> s;
			cout << "Please enter Student Registration number: " << endl;
			cin >> r;
			cout << "Please enter degree program: " << endl;
			cin >> d;
			studentList[i].name = s;
			studentList[i].regNo = r;
			studentList[i].degree = d;
			int n;
			int tch = 0;
			float gpa = 0, tgpa = 0, sgpa = 0, marks = 0;
			cout << "What are the number of courses?" << endl;
			cin >> n;
			studentList[i].courses = n;
			tch = n * 3;
			cout << endl << endl;
			for (int i = 0; i < n; i++)
			{
				cout << "Enter marks of course " << i + 1 << " :";
				cin >> marks;

				if (marks >= 86)
					gpa = 4;
				else if (marks >= 82 && marks < 86)
					gpa = 3.67;
				else if (marks >= 78 && marks < 82)
					gpa = 3.3;
				else if (marks >= 74 && marks < 78)
					gpa = 3;
				else if (marks >= 70 && marks < 74)
					gpa = 2.67;
				else if (marks >= 66 && marks < 70)
					gpa = 2.33;
				else if (marks >= 62 && marks < 66)
					gpa = 2;
				else if (marks >= 58 && marks < 62)
					gpa = 1.67;
				else if (marks >= 54 && marks < 58)
					gpa = 1.33;

				else
				{
					(marks >= 50 && marks < 54);
					gpa = 1;
				}
				tgpa = tgpa + (gpa * 3);
			}

			sgpa = tgpa / tch;
			studentList[i].sgpa = sgpa;
			cout << "Student's SGPA is: " << sgpa << endl;
			cout << endl << endl;
		}
	}

	void print_studentList()
	{
		for (int i = 0; i < 3; i++)
		{
			cout << "Student name: " << studentList[i].name << endl;
			cout << "Registration Number: " << studentList[i].regNo << endl;
			cout << "Degree program: " << studentList[i].degree << endl;
			cout << "Number of courses: " << studentList[i].courses << endl;
			cout << "SGPA: " << studentList[i].sgpa << endl;
			cout << endl;
		}
	}

};

int main()
{
	student s;
	studentList sl;

	cout << "Hello! please enter student details. " << endl << endl;
	sl.add_student();

	cout << "The class results are as follows: " << endl << endl << endl;
	sl.print_studentList();

	return 0;
}
