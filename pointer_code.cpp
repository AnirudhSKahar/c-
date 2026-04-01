#include <iostream>
using namespace std;
int main() {
    int x = 10;
    int* p = &x; 
    cout <<  x << endl; // Output: 10
    cout << &x << endl; // Output: Address of x
    cout << p << endl; // Output: Address of x
    cout << *p << endl; // Output: 10

    return 0;
}