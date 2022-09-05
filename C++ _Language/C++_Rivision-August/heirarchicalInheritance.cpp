// Heirarchical Inheritance - Single parent class and multiple child classes
#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Show method called of parent class" << endl;
    }
};

class child1 : public Parent
{
public:
    void show()
    {
        cout << "Show method called of child1 class" << endl;
    }
};
class child2 : public Parent
{
public:
    void show()
    {
        cout << "Show method called of child2 class" << endl;
    }
};
int main()
{
    child1 c1;
    child1 c2;
    Parent p1;
    p1.show();
    c1.show();
    c2.show();
}