#include<iostream>
using namespace std;
// bank_system 
class customer
{
    private:
    int acc_no;
    public:
    string name;
    float balance;
    void setdata(string n,int a,float b)
    {
        name=n;
        acc_no=a;
        balance=b;
    }
    void getdata()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter account number: ";
        cin>>acc_no;
        cout<<"Enter balance: ";
        cin>>balance;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl<<endl;
    }
    void deposit(float amount)
    {
        balance+=amount;
        cout<<"Amount deposited: "<<amount<<endl<<endl;
    }
    void withdraw(float amount)
    {
        if(amount>balance)
        {
            cout<<"Insufficient balance"<<endl<<endl;
        }
        else
        {
            balance-=amount;
            cout<<"Amount withdrawn: "<<amount<<endl<<endl;
        }
    }

};
int main()
{

    // customer c1;
    // c1.setdata("ajay",12345,1000);
    // customer c2;
    // c2.setdata("aayush",54321,2000);
    // c1.display();
    // cout<<"After depositing 500 to c1"<<endl;
    // c1.deposit(500);
    // c1.display();
    // cout<<"After withdrawing 200 from c1"<<endl;
    // c1.withdraw(200);
    // c1.display();
    // c2.display();
    // c2.deposit(1000);
    // c2.display();
    int output;
    cout<< "1. Create new account"<<endl;
    cout<< "2. Exit"<<endl; 
    cout<<"Enter your choice: ";
    cin>>output;    
    for(int i=0;i<output;i++)
    {
        if(output==1)
        {string name;
    int acc_no; 
    float balance;
    cout<<"Enter name: ";
    cin>>name;  
    cout<<"Enter account number: ";
    cin>>acc_no;
    cout<<"Enter balance: ";
    cin>>balance;
    customer c3;
    c3.setdata(name,acc_no,balance);
    c3.display();
            break;
        }
        else if(output==2)
        {
            return 0;
        }
        else
        {
            cout<<"Invalid choice"<<endl;
            return 0;
        }
    }
    string name;
    int acc_no; 
    float balance;
    cout<<"Enter name: ";
    cin>>name;  
    cout<<"Enter account number: ";
    cin>>acc_no;
    cout<<"Enter balance: ";
    cin>>balance;
    customer c3;
    c3.setdata(name,acc_no,balance);
    c3.display();
    return 0;
}
