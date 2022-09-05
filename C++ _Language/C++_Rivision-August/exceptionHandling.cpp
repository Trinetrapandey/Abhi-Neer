/*
Left in C++
Last 2 Topics :
1. Exception Handling
2. Template
*/

// Exception Handling
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter values of a & b : ";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw 1; // Floating point exception core dump
        int c = a / b;
        cout << "Result = " << c << endl;
    }

    catch (int i)
    {
        cout << "You are trying to devide a no with zero no." << endl;
    }
    return 0;
}
