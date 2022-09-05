// Method Overloading
#include <iostream>
using namespace std;

class funvOverloading
{
public:
    int greaterNumber(int a, int b)
    {
        int res = a > b ? a : b;
        return res;
    }

    int greaterNumber(int a, int b, int c)
    {
        int res = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        return res;
    }
};
int main()
{
    funvOverloading obj;
    int res1 = obj.greaterNumber(10, 23);
    int res2 = obj.greaterNumber(99, 78, 23);

    cout << "Greater Number 2 = " << res1 << endl;
    cout << "Greater Number 3 = " << res2 << endl;
}