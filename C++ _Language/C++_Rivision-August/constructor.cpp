// Default Constructor
#include <iostream>
using namespace std;
class add
{
public:
    add() // Name is same as class name
    {
        cout << "Constructor invoked" << endl;
    }
};
int main()
{
    add obj;
    // add obj1;
    // add obj2;
    // add obj3;
    // add obj4;
    //       or
    add obj1, obj2, obj3;
}