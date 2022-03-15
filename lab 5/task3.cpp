#include<iostream>
#include<string>
using namespace std;

class stringType {
    string s1;
    string s2;
public:
    stringType() {
        s1 = "\0";
        s2 = "\0";
    }
    void setValues(string str1, string str2) {
        s1 = str1;
        s2 = str2;
        return;
    }
    void DisplayValues() {
        cout << "The first string is: " << s1 << endl;
        cout << "The second string is: " << s2 << endl;
        return;
    }
    int compare(string s1, string s2) {
        if (s1 == s2)
            return 0;
        else if (s1 > s2)
            return 1;
        else if (s1 < s2)
            return -1;
    }
    void copy(string source, string destination) {
        destination = source;
        cout << "The copied string is:" << destination;
        return;
    }
    int maxLength() {
        int l1 = 0, l2 = 0;

        for (int i = 0; s1[i] != '\0'; i++) {
            l1++;
        }
        for (int i = 0; s2[i] != '\0'; i++) {
            l2++;
        }
        if (l1 >= l2)
            return l1;
        else
            return l2;
    }
    string concatenate(string s1, string s2) {
        return s1 + s2;
    }
    int searchWord(string word) {
        string temp = s1;
        int i = 0;
        string str;

        while (temp[i] != '\0') {
            int j = 0;
            char token[1000];
            str = "";
            while (temp[i] != '\0') {
                token[j] = temp[i];

                if (temp[i] == ' '||temp[i]==',' || temp[i] == '.' || temp[i] == ')' || temp[i] == ';' || temp[i] == ':' || temp[i] == '!') {
                    i++;
                    j++;
                    break;
                }
                i++;
                j++;
            }
            token[j] = '\0';
            for (int x = 0; x <= j; x++) {
                str += token[x];
                
            }
            cout << str << endl;
            cout << word<<endl;
            if (str == word)
                cout << "1"<<endl;
                return 1;
        }
        return 0;
    }

    int searchChar(char ch) {
        int i = 0;
        while (s1[i] != '\0') {
            if (s1[i] == ch)
                return 1;
            else
                i++;
        }
        return 0;
    }

    ~stringType() {
        cout << endl << "Program terminated!";
    }

};


int main() {
    int option = 0;
    stringType s;
    string first, second, word;
    do {
        cout << "Menu:" << endl;
        cout << "1-Set string values " << endl;
        cout << "2-Print string values " << endl;
        cout << "3-print max length of strings " << endl;
        cout << "4-compare strings " << endl;
        cout << "5-copy string from source to destination " << endl;
        cout << "6-concatenate strings " << endl;
        cout << "7-search for a word in a string " << endl;
        cout << "8-search for a char in a string " << endl;
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
            cout << "Enter the first string: ";
            cin.ignore(1000, '\n');
            getline(cin, first);

            cout << "Enter the second string: ";

            getline(cin, second);

            s.setValues(first, second);
            break;
        case 2:
            s.DisplayValues();
            break;
        case 3:
            cout << "The maximum length out of the two strings is:" << s.maxLength();
            break;
        case 4:
            if (s.compare(first, second) == 0) {
                cout << "The strings are identical" << endl << endl;
            }
            else if (s.compare(first, second) == 1) {
                cout << "The first string is larger" << endl << endl;
            }
            else if (s.compare(first, second) == -1) {
                cout << "The first string is smaller" << endl << endl;
            }
            break;
        case 5:
            s.copy(first, second);
            break;
        case 6:
            cout << "The concatenated string is:" << s.concatenate(first, second);
            break;
        case 7:
            cout << "Enter the word you want to search for in the string:";
            cin.ignore();
            getline(cin, word);
            if (s.searchWord(word) == 1)
                cout << "The word has been found!" << endl;
            else
                cout << "The word is not in the string!" << endl;

            break;
        case 8:
            char ch;
            cout << "Enter the character you want to search for in the string:";
            cin >> ch;
            if (s.searchChar(ch) == 1)
                cout << "The character has been found!" << endl;
            else
                cout << "The character is not in the string!" << endl;
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