// Abstract class
#include <iostream>
using namespace std;
class Parent
{
public:
    virtual void display() = 0;
};
class child : public Parent
{
public:
    void display()
    {
        cout << "DisplaaaaaaaaaaayyyyyyyyyYY!!!!!!!!!!!" << endl;
    }
};

int main()
{
    child cobj;
    cobj.display();
}