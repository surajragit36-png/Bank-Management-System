// BANK  MANAGEMENT SYSTEM MINI PROJECT


#include<iostream>
using namespace std;

class Customer
{
    int id;
    string name;

    public:
    void read()
    {
        cout<<"Enter id and name of customer "<<endl;
        cin>>id>>name;
    }
    public:
    void show()
    {
        cout<<"id and name of customer is "<<endl<<id<<endl<<name<<endl;
    }
};

class Account 
{
    int accno,bal;
    string acctype;

    public:
    void read()
    {
        cout<<"Enter accno,bal and acctype "<<endl;
        cin>>accno>>bal>>acctype;
    }
    void show()
    {
         cout<<"accno,bal and acctype is "<<endl<<accno<<endl<<bal<<endl<<acctype<<endl;
    }
};

class RBI
{
    Customer c;
    Account a;

    public:
    void read()
    {
        c.read();
        a.read();
    }
    public:
    void show()
    {
        c.show();
        a.show();
    }
    void withdrawal_limit()
    {
        cout<<"Withdrawal limit is 10000"<<endl;
    }
    void ROI()
    {
        cout<<"ROI is 5.5%"<<endl;
    }

};

class SBI : public RBI
{
    public:
    void ROI()   
    {
        cout<<"ROI is 7.5%"<<endl;
    }
};

class Axis : public RBI
{
    public:
    void withdrawal_limit()
    {
        cout<<"withdrawal limit is 25000"<<endl;
    }
};

int main()
{
    int num;
    cout<<"Enter value of num"<<endl;
    cin>>num;

    if(num==1)
    {
        SBI s;
        s.read();
        s.show();
        s.withdrawal_limit();
        s.ROI();
    }

    else if(num==2)
    {
        Axis a;
        a.read();
        a.show();
        a.withdrawal_limit();
        a.ROI();

    }
    else
    {
        cout<<"Invalid Choice "<<endl;
    }

    return 0;
}

//FLOW:-

//                   START
//                     │
//                     ▼
//           Create Objects in main()
//              SBI s      Axis a
//                     │
//                     ▼
//           User enters choice
//              num = 1 or 2
//                     │
//          ┌──────────┴──────────┐
//          │                     │
//          ▼                     ▼
//       num == 1              num == 2
//          │                     │
//          ▼                     ▼
//       SBI Object            Axis Object
//          │                     │
//          ▼                     ▼
//       s.read()              a.read()
//          │                     │
//          ▼                     ▼
//       s.show()              a.show()
//          │                     │
//          ▼                     ▼
//    s.ROI() → SBI(7.5)      a.ROI() → RBI(5.5)
//          │                     │
//          ▼                     ▼
// s.withdraw_limit()      a.withdraw_limit()
//    RBI(100000)             Axis(50000)
//          │                     │
//          └──────────┬──────────┘
//                     ▼
//                    END

