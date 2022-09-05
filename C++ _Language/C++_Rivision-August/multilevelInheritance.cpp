// Multilevel Inheritance
// Multiple Ineritance
#include <iostream>
using namespace std;
class Area
{
protected:
    int l, b;

public:
    int getArea()
    {
        return l * b;
    }
};

class Volume : public Area
{
protected:
    int h;

public:
    int getVol()
    {
        return getArea() * h;
    }
};

class Density : public Volume
{
private:
    double m;

public:
    void setData(int l, int b, int h, double m)
    {
        this->l = l;
        this->b = b;
        this->h = h;
        this->m = m;
    }
    double getDensity()
    {

        return m / getVol();
    }
};

int main()
{
    Density obj;
    obj.setData(10, 20, 30, 40);
    cout << "Area = " << obj.getArea() << endl;
    cout << "Volume = " << obj.getVol() << endl;
    cout << "Density = " << obj.getDensity() << endl;
}
