// Default Argument
// For this solution we use Polymorphism
#include <iostream>
using namespace std;

class defaultArgument
{
public:
    int setData(int a, int b, int c = 40, int d = 50)
    {
        int addition = a + b + c + d;
        return addition;
    }
};
int main()
{
    defaultArgument obj;
    int add = obj.setData(10, 20);          // passing only two arguments
    int add1 = obj.setData(10, 20, 30);     //
    int add2 = obj.setData(10, 20, 30, 40); // Funciton argumrnts Overridding to default arguments
    cout << "Addition = " << add << endl;
    cout << "Addition1 = " << add1 << endl;
    cout << "Addition2 = " << add2 << endl;
}