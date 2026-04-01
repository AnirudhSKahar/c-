#include <iostream>
using namespace std;

class Test {
public:

    // User-Defined Constructor
    Test() {
        cout << "Constructor Called"
             << endl;
    }

    // User-Defined Destructor and it is called automatically and only defined once
    ~Test() {
        cout << "Destructor Called"
             << endl;
    }
};
int main() {
    Test t;

    return 0;
}