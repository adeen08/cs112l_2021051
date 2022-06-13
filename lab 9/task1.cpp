#include<iostream>
using namespace std;

class vehicle{
    protected:
    int no_of_tires;
    string size;
    int no_of_seats;

    public:
    vehicle(){
        no_of_tires=0;
        size="";
        no_of_seats=0;
    }
    ~vehicle(){}
    virtual void setValue(){
        cout<<"Enter the number of tires in the car: ";
        cin>>no_of_tires;
        cout<<endl;
        cout<<"Enter the size of the car(small/medium/large): ";
        cin>>size;
        cout<<endl;
        cout<<"Enter the number of seats in the car: ";
        cin>>no_of_seats;
        cout<<endl;
    }

    virtual void printValue(){
        cout<<"The number of tires in the car is: "<<no_of_tires<<endl;
        cout<<"The size of the car is: "<<size<<endl;
        cout<<"The number of seats in the car is: "<<no_of_seats<<endl;
    }

    virtual int tires(){return no_of_tires;}
    virtual string carsize(){return size;}
    virtual int seats(){return no_of_seats;}
};

class car:public vehicle{
    protected:
    string color;
    public:
    car(){
        color="";
    }
    ~car(){}
    void setValue(){
        cout<<"Enter the number of tires in the car: ";
        cin>>no_of_tires;
        cout<<endl;
        cout<<"Enter the size of the car(small/medium/large): ";
        cin>>size;
        cout<<endl;
        cout<<"Enter the color of the car : ";
        cin>>color;
        cout<<endl;
        cout<<"Enter the number of seats in the car: ";
        cin>>no_of_seats;
        cout<<endl;
    }   

    void printValue(){
        cout<<"The number of tires in the car is: "<<no_of_tires<<endl;
        cout<<"The size of the car is: "<<size<<endl;
        cout<<"The color of the car is: "<<color<<endl;
        cout<<"The number of seats in the car is: "<<no_of_seats<<endl;
    }

    virtual string carcolor(){return color;}
};

class vitz:public car{
    
    int model;
    string plate_number;
    public:
    vitz(){
        model=0;
        plate_number="";
    }
    ~vitz(){}
    void setValue(){
        cout<<"Enter the number of tires in the car: ";
        cin>>no_of_tires;
        cout<<endl;
        cout<<"Enter the size of the car(small/medium/large): ";
        cin>>size;
        cout<<endl;
        cout<<"Enter the color of the car : ";
        cin>>color;
        cout<<endl;
        cout<<"Enter the number of seats in the car: ";
        cin>>no_of_seats;
        cout<<endl;
        cout<<"Enter the model number of the car: ";
        cin>>model;
        cout<<endl;
        cout<<"Enter the plate number of the car: ";
        cin>>plate_number;
        cout<<endl;
    }  

    void printValue(){
        cout<<"The number of tires in the car is: "<<no_of_tires<<endl;
        cout<<"The size of the car is: "<<size<<endl;
        cout<<"The color of the car is: "<<color<<endl;
        cout<<"The number of seats in the car is: "<<no_of_seats<<endl;
        cout<<"The model number of the car is: "<<model<<endl;
        cout<<"The plate number of the car is: "<<plate_number<<endl;
    }

    int carmodel(){return model;}
    string carplate(){return plate_number;}
};

int main(){
    car *v;
    vitz c;
    v=&c;
    v->setValue();
    v->printValue();
    cout<<"The number of tires in the car is: "<<v->tires()<<endl;
    cout<<"The size of the car is: "<<v->carsize()<<endl;
    cout<<"The number of seats in the car is: "<<v->seats()<<endl;
    cout<<"The color of the car is: "<<v->carcolor()<<endl;
    cout<<"The model number of the car is: "<<c.carmodel()<<endl;
    cout<<"The plate number of the car is: "<<c.carplate();

    return 0;
}