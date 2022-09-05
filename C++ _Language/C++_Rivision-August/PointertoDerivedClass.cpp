// Concept of Pointer to Derived class
#include <iostream>
using namespace std;
class Parent
{
public:
    void display()
    {
        cout << "Display method of parent class" << endl;
    }
};
class Child : public Parent
{
public:
    void draw()
    {
        cout << "Draw method of Child class" << endl;
    }
};
int main()
{
    Parent pobj;
    Child cobj, *ptr;
    ptr = &cobj;
    ptr->display();
    ptr->draw();
}