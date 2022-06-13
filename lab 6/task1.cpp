#include <iostream>
#include<string>
using namespace std;
class person {
    string data;
    char uni[50], competition[50];
    int i = 0, c = 0, u = 0;
public:
    void setter() {
        cout << "Enter the competition and university name: ";
        getline(cin, data);

        while (data[i] != ' ') {
            competition[c] = data[i];
            i++;
            c++;
        }
        competition[i] = '\0';
        i++;
        
        while (data[i] != '\0') {
            uni[u] = data[i];
            u++;
            i++;
        }
        uni[u] = '\0';
    }

    friend class coordinator;
};
class coordinator {
    person p1;
    person p2;
public:
    void check() {
        p1.setter();
        p2.setter();
        int equal=1;
        cout<<p1.uni<<" "<<p2.uni<<endl;
        for(int i=0;p1.uni[i]!='\0' ||p2.uni[i]!='\0';i++){
            if(p1.uni[i]!=p2.uni[i]){
                equal=0;
                break;
            }
        }
        if (equal==1) {
            if (p1.c >= p2.c)
                cout << "Message from the coordinator Person1 and Person 2 are roommates, and the room number is " << p1.c<<endl<<endl;
            else
                cout << "Message from the coordinator Person1 and Person 2 are roommates, and the room number is " << p2.c<<endl<<endl;
        }
        else if(equal==0)
            cout << "Message from the coordinator. person 1 and person 2 are not roommates"<<endl<<endl;
    }
};


int main()
{

while(1){
    coordinator c;
    c.check();
}
    return 0;

}