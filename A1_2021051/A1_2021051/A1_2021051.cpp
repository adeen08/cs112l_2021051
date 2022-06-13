#include<iostream>
#include<iomanip>
using namespace std;

struct book {
    int ID;
    string BookName;
    string Author;
    string ISBN;
    int price;
    int pages;
    void PrintBook() {
        cout << "Book ID is: " << ID << endl;
        cout << "Book Name is: " << BookName << endl;
        cout << "Book Author is: " << Author << endl;
        cout << "Book ISBN is: " << ISBN << endl;
        cout << "Book price is: " << price << endl;
        cout << "Book pages is: " << pages << endl << endl;
        return;
    }
};

struct BookList {
    book books[5];

    void PrintList() {
        for (int i = 0; i < 5; i++) {
            cout << "Book " << i + 1 << " Data:" << endl;
            books[i].PrintBook();
        }
        return;
    }
    void AddBook() {
        int n = 0;
        do {
            cout << "What index do you want to add the book at(0-4): ";
            cin >> n;
            if (n < 0 || n>4) {
                cout << "Invalid!" << endl;
            }
        } while (n < 0 || n>4);
        cout << "Enter ID of the book: " << endl;
        cin >> books[n].ID;
        cout << "Enter the name of the book: " << endl;
        cin >> books[n].BookName;
        cout << "Enter the name of the Author: " << endl;
        cin >> books[n].Author;
        cout << "Enter ISBN of the book: " << endl;
        cin >> books[n].ISBN;

        do {
            cout << "Enter price of the book: " << endl;
            cin >> books[n].price;
            if (books[n].price < 0) {
                cout << "Invalid! Price can't be negative!" << endl << endl;
            }
        } while (books[n].price < 0);

        do {
            cout << "Enter number of pages of the book: " << endl;
            cin >> books[n].pages;

            if (books[n].pages < 0) {
                cout << "Invalid! Pages can't be negative!" << endl << endl;
            }
        } while (books[n].pages < 0);
        return;
    }
    void DelBook() {
        string code;
        int index = 0, found = 0;

        cout << "Enter the ISBN of the book you want to delete: ";
        cin >> code;
        for (int i = 0; i < 5; i++) {
            if (code == books[i].ISBN) {
                index = i;
                found = 1;
                break;
            }

        }

        if (found == 0) {
            cout << "No book with this ISBN exists" << endl << endl;
            return;
        }

        books[index].ID = 0;
        books[index].BookName = "";
        books[index].Author = "";
        books[index].ISBN = "";
        books[index].price = 0;
        books[index].pages = 0;
        return;
    }
    void AscendingSort() {
        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (books[i].ID > books[j].ID)
                {
                    book temp = books[i];
                    books[i] = books[j];
                    books[j] = temp;
                }
            }
        }
        PrintList();
    }

    void DescendingSort() {
        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (books[i].ID < books[j].ID) {
                    book temp = books[i];
                    books[i] = books[j];
                    books[j] = temp;
                }
            }
        }
        PrintList();
    }
};

struct student
{
    int ID;
    string StdName;
    int RollNo;

    void PrintStd() {

        cout << "Student ID is: " << ID << endl;
        cout << "Student name is: " << StdName << endl;
        cout << "Student Roll No. is: " << RollNo << endl << endl;

        return;
    }
};

struct StudentList {
    student std[5];
    void PrintStdList(int& x) {
        for (int a = 0; a < x; a++) {
            cout << "Student " << a + 1 << " Data:" << endl;
            std[a].PrintStd();
        }
        return;
    }

    void AddStd(int& x) {
        if (x < 5) {
            do {
                cout << "Enter ID of the Student: " << endl;
                cin >> std[x].ID;

                if (std[x].ID < 0) {
                    cout << "Invalid! ID can't be negative!" << endl << endl;
                }
            } while (std[x].ID < 0);
            cout << "Enter the name of the student: " << endl;
            cin >> std[x].StdName;
            do {
                cout << "Enter Roll No.of the student: " << endl;
                cin >> std[x].RollNo;


                if (std[x].RollNo < 0) {
                    cout << "Invalid! Roll No. can't be negative!" << endl << endl;
                }
            } while (std[x].RollNo < 0);
            x++;
            return;
        }
        else {
            cout << "Maximum number of students reached!";
            return;
        }
    }

    void delStd(int& x) {
        int code;
        int index = 0;
        cout << "Enter the ID of the student you want to delete: ";
        cin >> code;
        for (int i = 0; i < 5; i++) {
            if (code == std[i].ID) {
                index = i;
            }
        }
        int temp_ID[5];
        string temp_name[5];
        int temp_rollno[5];
        int a = 0;

        for (int i = 0; i < x; i++) {
            if (i == index) {
                continue;
            }
            temp_ID[a] = std[i].ID;
            temp_name[a] = std[i].StdName;
            temp_rollno[a] = std[i].RollNo;
            a++;
        }

        for (int i = 0; i < x; i++) {
            std[i].ID = temp_ID[i];
            std[i].StdName = temp_name[0];
            std[i].RollNo = temp_rollno[0];
        }
        std[x - 1].ID = 0;
        std[x - 1].StdName = "";
        std[x - 1].RollNo = 0;
        x--;
    }

};


int main() {

    int option, e;
    StudentList s;
    BookList b;
    int x = 0;

    do {
        cout << endl;
        e = 0, option = 0;
        cout << "Main Menu: " << endl;
        cout << "1-Add a new student" << endl;
        cout << "2-Delete an existing student" << endl;
        cout << "3-Show all students" << endl;
        cout << "4-Add new book" << endl;
        cout << "5-Delete existing book" << endl;
        cout << "6-show all books" << endl;
        cout << "7-Sort book in ascending order" << endl;
        cout << "8-sort books in descending order " << endl;
        cout << "0-Exit" << endl;
        cout << "Enter the number of the option you want to select: ";
        cin >> option;
        cout << endl;

        switch (option) {
        case 1:
            s.AddStd(x);
            break;
        case 2:
            s.delStd(x);
            break;
        case 3:
            s.PrintStdList(x);
            break;
        case 4:
            b.AddBook();
            break;
        case 5:
            b.DelBook();
            break;
        case 6:
            b.PrintList();
            break;
        case 7:
            b.AscendingSort();
            break;
        case 8:
            b.DescendingSort();
            break;
        case 0:
            e = 1;
            break;
        default:
            cout << "Invalid option!" << endl << endl;
            break;
        }
    } while (e != 1);

    return 0;
}