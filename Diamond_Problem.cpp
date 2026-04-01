// this code demonstrates the diamond problem in C++ and how to resolve it using virtual inheritance.
// #include <iostream>
// using namespace std;

// // Base class
// class Base {
// public:
//     void fun() { cout << "Base" << endl; }
// };

// // Parent class 1
// class Parent1 : public Base {};

// // Parent class 2
// class Parent2 : public Base {};

// // Child class inheriting from both parents
// class Child : public Parent1, public Parent2 {};

// int main() {
//     Child obj;
//     obj.fun();   // Ambiguity error
//     return 0;
// }

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void fun() { cout << "Base" << endl; }
};

// Parent classes with virtual inheritance
class Parent1 : virtual public Base {};
class Parent2 : virtual public Base {};

// Child class
class Child : public Parent1, public Parent2 {};

int main() {
    Child obj;
    obj.fun();   // No ambiguity
    return 0;
}