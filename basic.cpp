#include <iostream>
#include <string>
using namespace std;

// creating a class
class teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // method to set data/initialize data members
    void changedept(string newdept)
    {
        dept = newdept;
    }
    void addingdata(string tname, string tdept, string tsubject, double tsalary)
    {
        name = tname;
        dept = tdept;
        subject = tsubject;
        salary = tsalary;
    };
    void displaydata()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Department: " << dept << endl;
        cout << "Teacher Subject: " << subject << endl;
        cout << "Teacher Salary: " << salary << endl << endl;
    }
};
int main()
{
    // creating an object of the class
    teacher teacher1;
    teacher1.addingdata("ajay", "Computer Science", "Programming", 50000);
    teacher1.displaydata();
    teacher teacher2;
    teacher2.addingdata("vijay", "Mathematics", "Calculus", 45000);
    teacher2.displaydata();
    teacher teacher3;
    teacher3.addingdata("sanjay", "Physics", "Quantum Mechanics", 55000);
    teacher3.displaydata();
    return 0;
}
