#include <iostream>
using namespace std;

class student {
    public:
        int rollno ;
        int age ;
        
        // Parameterized constructor
        student(int rollno, int age) {
            this->rollno = rollno ;
            this->age = age ;
        }
        
        // Copy constructor
        student(const student &s){
            rollno = s.rollno ;
            age = s.age ;
            cout << "Copy constructor called" << endl ;
        }
        
        void print (){
            cout << "Roll No: " << rollno << ", Age: " << age << endl ;
        }
};