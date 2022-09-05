// Method Overloading
// with different types of data arguments
#include <iostream>
using namespace std;

class funvOverloading
{
public:
    double greaterNumber(int a, double b)
    {
        double res = a > b ? a : b;
        return res;
    }

    double greaterNumber(double a, int b, int c)
    {
        double res = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        return res;
    }
};
int main()
{
    funvOverloading obj;
    double res1 = obj.greaterNumber(10, 23.3);
    double res2 = obj.greaterNumber(99.45, 78, 23);

    cout << "Greater Number 2 = " << res1 << endl;
    cout << "Greater Number 3 = " << res2 << endl;
}