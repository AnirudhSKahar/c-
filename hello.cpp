# include <iostream>
using namespace std ;

class student {
    public:
        int rollno ;
        int age ;
        student(int rollno, int age){
            this->rollno = rollno ;
            this->age = age ;}
        void print (){
            cout << "Roll No: " << rollno << ", Age: " << age << endl ;
        }
        };
        int main(){
            student s1(101, 20 ) ;
            s1.print() ;
            
            
            return 0 ;
        }