#include<iostream>
using namespace std;

class bankAccount{
    protected:
    int accNo;
    double balance;

    public:
    bankAccount(){
        accNo=0;
        balance=0;
    }
    ~bankAccount(){}

    void setAccNo(){
        cout<<"Enter the user's account number: ";
        cin>>accNo;
        while (cin.fail()||accNo<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> accNo;
        }
    }
    void deposit(){
        int cash=0;
         cout<<"Enter the amount you want to deposit: ";
           cin>>cash;
           while (cin.fail()||cash<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> cash;
            }
            balance+=cash;
            cout<<"You have successfully deposited the amount of Rs. "<<cash;
    }
    void withdraw(){
        int cash=0;
         cout<<"Enter the amount you want to withdraw: ";
           cin>>cash;
           while (cin.fail()||cash<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> cash;
            }
            if(cash<balance){
                balance-=cash;
                cout<<"You have successfully withdrawn the amount of Rs. "<<cash;
            }
            else
                cout<<"You do not have enough balance to withdraw this amount"<<endl;
    }


    void printaccno(){
        cout<<"Your account number is: "<<accNo;
    }
    void printbal(){
        cout<<"Your current balance is: "<<balance;
    }

    
    void PrintAccInfo(){
        cout<<"The account number is: "<<accNo;
        cout<<"Your current Balance is: "<<balance;
    }

};

class checkingAccount: public bankAccount{
    float interestRate;
    double minBal;
    float serviceCharges;
    public:
    void setInterestRate(){
        cout<<"Enter the Interest Rate: ";
        cin>>interestRate;
        while (cin.fail()||interestRate<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> interestRate;
        }
    }
    void printInterest(){
        cout<<"The interest rate is: "<<interestRate<<"%"<<endl<<endl;
    }
    void setMinBal(){
        cout<<"Enter the Minimum Balance: ";
        cin>>minBal;
        while (cin.fail()||minBal<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> minBal;
        }
    }
    void printMinBal(){
        cout<<"The minimum Balance you can have is: "<<minBal<<endl<<endl;
    }
    void setServiceCH(){
        cout<<"Enter the Minimum Balance: ";
        cin>>serviceCharges;
        while (cin.fail()||serviceCharges<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> serviceCharges;
        }
    }
    void printServiceCH(){
        cout<<"The Service charges are: "<<serviceCharges<<endl<<endl;
    }

    void postInterest(){
        balance+=balance*(interestRate/100);
    }

    void VerifyBalance(){
        if(balance<minBal){
            cout<<"Your Current Balance is less than the required minimum balance."<<endl;
        }
        else
            cout<<"Your Current Balance is greater than the required minimum balance."<<endl;
    }
    void withdraw(){
        int cash=0;
         cout<<"Enter the amount you want to withdraw: ";
           cin>>cash;
           while (cin.fail()||cash<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> cash;
            }
            if((balance-cash)>=minBal){
                balance-=cash;
                cout<<"You have successfully withdrawn the amount of Rs. "<<cash;
            }
            else
                cout<<"You do not have enough balance to withdraw this amount"<<endl;
    }

    void PrintAccInfo(){
        cout<<"The account number is: "<<accNo;
        cout<<"Your current Balance after interest is: "<<balance;

    }

};

class SavingsAccount: public bankAccount{
    float interestRate;
    public:
    void setInterestRate(){
        cout<<"Enter the Interest Rate: ";
        cin>>interestRate;
        while (cin.fail()||interestRate<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> interestRate;
        }
    }
    void printInterest(){
        cout<<"The interest rate is: "<<interestRate<<"%"<<endl<<endl;
    }
    void postInterest(){
        balance+=balance*(interestRate/100);
    }
    void withdraw(){
        int cash=0;
         cout<<"Enter the amount you want to withdraw: ";
           cin>>cash;
           while (cin.fail()||cash<0) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> cash;
            }
            if(cash<balance){
                balance-=cash;
                cout<<"You have successfully withdrawn the amount of Rs. "<<cash;
            }
            else
                cout<<"You do not have enough balance to withdraw this amount"<<endl;
    }
    void PrintAccInfo(){
        cout<<"The account number is: "<<accNo;
        cout<<"Your current Balance after interest is: "<<balance;

    }
};


int main(){
    int option;
    do{
        cout <<endl<<endl<< "Welcome to GIKI Bank! WHich account do you want to create:" << endl;
        cout << "1-Checking Account" << endl;
        cout << "2-Savings Account" << endl;
        cout << "3-exit" << endl;
        cin >> option;
        while (cin.fail()) {
            cout << "Invalid!";
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Enter again: ";
            cin >> option;
        }
        if(option==1){
            checkingAccount c;
            c.setAccNo();
            c.deposit();
            c.withdraw();
            c.printaccno();
            c.printbal();
            c.setInterestRate();
            c.setMinBal();
            c.setServiceCH();
            c.printInterest();
            c.printMinBal();
            c.printServiceCH();
            c.postInterest();
            c.VerifyBalance();
            c.withdraw();
            c.PrintAccInfo();
        }
        else if(option==2){
            SavingsAccount s;
            s.setAccNo();
            s.deposit();
            s.withdraw();
            s.printaccno();
            s.printbal();
            s.setInterestRate();
            s.printInterest();
            s.postInterest();
            s.PrintAccInfo();
        }
    }while(option!=3);





    return 0;
}