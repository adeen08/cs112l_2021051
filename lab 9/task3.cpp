#include<iostream>
using namespace std;

class shape{
    protected:
    float length;
    float width;
    
    public:
    shape(){
        length =0;
        width =0;
    }
    ~shape(){}
    virtual void setter(){
        cout<<"Enter the length: ";
        cin>>length;
        cout<<"Enter the width: ";
        cin>>width;
    }
    
    virtual float Area()=0;

};

class TwoD:public shape{
    public:
    TwoD(){}
    ~TwoD(){}
    float Area()=0;
};

class ThreeD:public shape{
    public:
    ThreeD(){}
    ~ThreeD(){}
    float Area()=0;
    virtual float Volume()=0;
};

class circle : public TwoD{
protected:
    float radius;
    string color;
public:
    circle(){
        radius=0;
        color="";
    }
    ~circle(){}
    void setter()
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Enter the color of the Circle: ";
        cin >> color;
    }
    float Area(){return (3.14*radius*radius);}
    float getradius(){return radius;}
    virtual string getcolor(){return color;}
};

class square : public TwoD{
protected:
    float side;
    string color;
public:
    square(){
        side=0;
        color="";
    }
    ~square(){}
    void setter(){
        cout << "Enter the length of the side of the square: ";
        cin >> side;
        cout << "Enter the color of the square: ";
        cin >> color;
    }
    float Area(){return (side*side);}
    float getside(){return side;}
    string getcolor(){return color;}
};

class cube:public ThreeD{
protected:
    float height;
public:
    cube()
    {
        length=0;
        width=0;
        height = 0;
    }
    ~cube(){}
    void setter(){
        cout<<"Enter the length of the cube: ";
        cin>>length;
        cout<<"Enter the width of the cube: ";
        cin>>width;
        cout<<"Enter the height of the cube: ";
        cin>>height;
    }
    float Area(){return (6*length*length);}
    float Volume(){return (length*width*height);}
    float getlength(){return length;}
    float getwidth(){return width;}
    float getheight(){return height;}
};

class pyramid : public ThreeD{
protected:
    float height;
    float base;
public:
    pyramid()
    {
        height = 0;
        base = 0;
    }
    ~pyramid(){}
    void setter(){
        cout<<"Enter the height of the pyramid: ";
        cin>>height;
        cout<<"Enter the length of the base of the pyramid: ";
        cin>>base;
    }
    float Area(){return (base*base+2*base*height);}
    float Volume(){return (base*base*height)/3;}
    float getbase(){return base;}
    float getheight(){return height;}

};

int main(){
    circle c;
    c.setter();
    cout<<"The radius of the circle is: "<<c.getradius()<<endl;
    cout<<"The area of the circle is: "<<c.Area()<<endl;
    cout<<"The color of the circle is: "<<c.getcolor()<<endl<<endl;

    square s;
    s.setter();
    cout<<"The side of the square is: "<<s.getside()<<endl;
    cout<<"The area of the square is: "<<s.Area()<<endl;
    cout<<"The color of the square is: "<<s.getcolor()<<endl<<endl;

    cube a;
    a.setter();
    cout<<"The length of the cube is is: "<<a.getlength()<<endl;
    cout<<"The width of the cube is is: "<<a.getwidth()<<endl;
    cout<<"The height of the cube is is: "<<a.getheight()<<endl;
    cout<<"The area of the cube is: "<<a.Area()<<endl;
    cout<<"The volume of the cube is: "<<a.Volume()<<endl<<endl;

    pyramid p;
    p.setter();
    cout<<"The base of the pyramid is is: "<<p.getbase()<<endl;
    cout<<"The height of the pyramid is is: "<<p.getheight()<<endl;
    cout<<"The area of the pyramid is: "<<p.Area()<<endl;
    cout<<"The volume of the pyramid is: "<<p.Volume()<<endl<<endl;

    




}
