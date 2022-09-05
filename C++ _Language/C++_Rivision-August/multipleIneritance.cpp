// Multiple Ineritance
#include <iostream>
using namespace std;
class Parent1 // Parent1
{
protected:
    int l, b; // only declaration
public:
    int getArea()
    {
        return l * b;
    }
};

class Parent2 // Parent2
{
protected:
    int h;
};

class getVolume : public Parent1, Parent2
{
public:
    void setData(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    int getVol()
    {
        return getArea() * h;
    }
};

int main()
{
    getVolume obj;
    obj.setData(10, 20, 30);
    cout << "Area = " << obj.getArea() << endl;
    cout << "Volume = " << obj.getVol() << endl;
}