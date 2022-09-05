#include <iostream>
using namespace std;
class Parent
{
public:
    void shape()
    {
        cout << "Shape of Parent" << endl;
    }
};
class circle : public Parent
{
public:
    void shape()
    {
        cout << "Circle Shape " << endl;
    }
};
class square : public Parent
{
public:
    // void shape()
    // {
    //     cout << "Square Shape " << endl;
    // }
    // if it will not found shape in this child class than it will search it on his inherit class
};
class rectangle : public Parent
{
public:
    void shape()
    {
        cout << "Rectangle Shape " << endl;
    }
};

int main()
{
    circle c;
    square s;
    rectangle r;
    c.shape();
    s.shape();
    r.shape();
}