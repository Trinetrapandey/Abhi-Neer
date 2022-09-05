/*
Polymorphism - More than one form
type 1. Compile time Polymorphism -
     or  Static binding or Early binding
type 2. Run time Polymorphism - Method Overriding
    or  Dynamic binding or Late binding
*/
// Method Overriding

#include <iostream>
using namespace std;
class Parent
{
public:
    void show()
    {
        cout << "Show method called of Parent class" << endl;
    }
};
class child : public Parent
{
public:
    void show()
    {
        cout << "Show method called of Child class" << endl;
    }
};
int main()
{
    child cobj;
    Parent pobj;
    cobj.show();
    pobj.show();
}