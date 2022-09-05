// Class and Object
#include <iostream>
using namespace std;
class Operation
{
private:
    double a, b;
    void add()
    {
        double ad = a + b;
        cout << "Addition = " << ad << endl;
    }

public:
    void setData(double a, double b)
    {
        this->a = a; // this.a=a; = JS
        this->b = b;
    }

    void sub()
    {
        add();
        double sb = a - b;
        cout << "Subtraction = " << sb << endl;
    }
};

int main()
{
    cout << "Student Details : " << endl;
    Operation obj;
    double x, y;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
    obj.setData(x, y);
    obj.sub();
}
