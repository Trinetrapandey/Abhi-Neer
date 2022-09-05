// Inheritance
/*
inheritance is the mechanism of basing an object or class upon another object or class, retaining similar implementation. Also defined as deriving new classes from existing ones such as super class or base class and then forming them into a hierarchy of classes
*/

// Single Level inheritance
#include <iostream>
using namespace std;
class Area
{
protected:
    int l, b; // Protected accessable for only child class

public:
    int getArea() // accessible for public
    {
        return l * b;
    }
};
class Volume : public Area
{
private:
    int h;

public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    int getVolume()
    {
        return getArea() * h; // l * b * h
    }
};
int main()
{
    Volume obj;
    obj.setData(10, 20, 30);
    // int area = obj.getArea();
    // int volume = obj.getVolume();

    // cout << "Area = " << area << endl;
    cout << "Area = " << obj.getArea() << endl;
    // cout << "Volume = " << volume << endl;
    cout << "Volume = " << obj.getVolume() << endl;
}