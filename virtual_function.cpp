#include <iostream>
using namespace std;

class Payment {
public:
    virtual void payment() {
        cout << "Payment done using some method" << endl;
    }
};

class CreditCard : public Payment {
public:
    void payment() {
        cout << "Payment done using Credit Card" << endl;
    } 
};

class DebitCard : public Payment {
public:    void payment() {
        cout << "Payment done using Debit Card" << endl;
    }
};
int main() {
    CreditCard c;
    c.payment();
    DebitCard d;
    d.payment();
    return 0;
}