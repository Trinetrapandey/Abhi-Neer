// Method Overloading
// with different types of data arguments
// Calling and sending arguments for only one time
#include <iostream>
using namespace std;

class funcOverloading
{
public:
    void greaterNumber(double a, int b)
    {
        double res = a > b ? a : b;
        cout << "Greater Number  = " << res << endl;
    }
    void greaterNumber(double a, int b)
    {
        double res = a > b ? a : b;
        cout << "Greater Number  = " << res << endl;
    }
};
int main()
{
    funcOverloading obj;
    obj.greaterNumber(10, 23.3);
}