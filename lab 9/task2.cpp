#include<iostream>
using namespace std;

class MyFather{
    protected:
    string name;
    string eye_color;
    string hair_color;
    public:
    MyFather(){
        name="";
        eye_color="";
        hair_color="";
    }
    ~MyFather(){}
    virtual void setValue(){
        cout<<"Enter the name of the father: ";
        cin>>name;
        cout<<endl;
        cout<<"Enter the eye color of the father: ";
        cin>>eye_color;
        cout<<endl;
        cout<<"Enter the hair color of the father: ";
        cin>>hair_color;
        cout<<endl;
    }
    virtual void printValue(){
        cout<<"The name of the father is: "<<name<<endl;
        cout<<"The eye color of the father is: "<<eye_color<<endl;
        cout<<"The the hair color of the father is: "<<hair_color<<endl;
    }
};

class MyMother{
    protected:
    string name;
    string eye_color;
    string hair_color;
    public:
    MyMother(){
        name="";
        eye_color="";
        hair_color="";
    }
    ~MyMother(){}
    virtual void setValue(){
        cout<<"Enter the name of the mother: ";
        cin>>name;
        cout<<endl;
        cout<<"Enter the eye color of the mother: ";
        cin>>eye_color;
        cout<<endl;
        cout<<"Enter the hair color of the mother: ";
        cin>>hair_color;
        cout<<endl;
    }
    void printValue(){
        cout<<"The name of the mother is: "<<name<<endl;
        cout<<"The eye color of the mother is: "<<eye_color<<endl;
        cout<<"The the hair color of the mother is: "<<hair_color<<endl;
    }
};

class MySelf:public MyFather{
    string education;
    int age;
    public:
    MySelf(){
        education="";
        age=0;
    }
    ~MySelf(){}
    void setValue(){
        cout<<"Enter the name of the user: ";
        cin>>name;
        cout<<endl;
        cout<<"Enter the eye color of the user: ";
        cin>>eye_color;
        cout<<endl;
        cout<<"Enter the hair color of the user: ";
        cin>>hair_color;
        cout<<endl;
        cout<<"Enter the level of education of the user(school/college/university): ";
        cin>>education;
        cout<<endl;
        cout<<"Enter the age of the user: ";
        cin>>age;
        cout<<endl;
    }
    void printValue(){
        cout<<"The name of the user is: "<<name<<endl;
        cout<<"The eye color of the user is: "<<eye_color<<endl;
        cout<<"The the hair color of the user is: "<<hair_color<<endl;
        cout<<"The education level of the user is: "<<education<<endl;
        cout<<"The age of the user is: "<<age<<endl<<endl;
    }

};

class MySister:public MyFather, public MyMother{
    string education;
    int age;
    public:
    MySister(){
        education="";
        age=0;
    }
    ~MySister(){}
    void setValue(){
        cout<<"Enter the name of the sister: ";
        cin>>MyMother::name;
        cout<<endl;
        cout<<"Enter the eye color of the sister: ";
        cin>>MyMother::eye_color;
        cout<<endl;
        cout<<"Enter the hair color of the sister: ";
        cin>>MyMother::hair_color;
        cout<<endl;
        cout<<"Enter the level of education of the sister (school/college/university): ";
        cin>>education;
        cout<<endl;
        cout<<"Enter the age of the sister: ";
        cin>>age;
        cout<<endl;
    }
    void printValue(){
        cout<<"The name of the sister is: "<<MyMother::name<<endl;
        cout<<"The eye color of the sister is: "<<MyMother::eye_color<<endl;
        cout<<"The the hair color of the sister is: "<<MyMother::hair_color<<endl;
        cout<<"The education level of the sister is: "<<education<<endl;
        cout<<"The age of the sister is: "<<age<<endl;
    }
};

int main(){
    MyFather *f;
    MySelf s;
    f=&s;
    f->setValue();
    f->printValue();

    MyFather *m;
    MySister a;
    m=&a;
    m->setValue();
    m->printValue();


    return 0;
}