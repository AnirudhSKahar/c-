#include <iostream>
using namespace std;

class student
{
private:
    int marks;

public:
    // constructor
    student(int m)
    {
        marks = m;
        if (marks >= 0 && marks <= 100)
        {
            cout << "Valid marks" << endl;
        }
        else
        {
            cout << "Invalid marks" << endl;
        }
    }
    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    int m;
    cout << "Enter marks: ";
    cin >> m;
    student s1(m);
    s1.display();
    return 0;
}