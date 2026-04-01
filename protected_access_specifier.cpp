#include<iostream>
using namespace std;
class parent {
    protected:
        int x=10 ;
    };
class child : public parent {
    public:
    
        
        void display() {
            cout << "Value of x: " << x << endl ;
        }};
int main() {
    child c ;   
    c.display() ;
    return 0 ;
}  