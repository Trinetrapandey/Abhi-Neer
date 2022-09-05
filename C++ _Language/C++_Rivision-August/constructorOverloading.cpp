// constructor Overloading
#include <iostream>
using namespace std;
class consOverload
{
    double a, b, res;

public:
    consOverload(int a, double b)
    {
        this->a = a;
        this->b = b;
        double res = a + b; // Only local scope
        this->res = res;
    }

    consOverload(double a, double b)
    {
        this->a = a;
        this->b = b;
        double res = a + b; // Only local scope
        this->res = res;
    }
    void showRes()
    {
        cout << "res = " << res << endl;
    }
};
int main()
{
    consOverload obj(10.14, 45.33), obj1(10.14, 45.33);
    obj.showRes();
}
