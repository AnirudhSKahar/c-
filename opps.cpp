// This program demonstrates the use of a static variable within a function.
// The static variable 'i' retains its value between function calls,
// allowing it to act as a counter that increments each time the function is called.
// Output:
// Counter value: 1
// Counter value: 2
// Counter value: 3
// Note: To compile this code, use a C++14 compatible compiler.
// Example compilation command: g++ -std=c++14 opps.cpp -o opps
// Example execution command: ./opps
#include<bits/stdc++.h>
using namespace std;

void Counter()
{
    static int i = 0;   // static variable
    i++;               // increment i
    cout << "Counter value: " << i << endl;
}

int main()
{
    Counter();  // 1st call
    Counter();  // 2nd call
    Counter();  // 3rd call

    return 0;
}

