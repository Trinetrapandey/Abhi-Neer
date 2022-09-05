// Passing object and returning object from a function
#include <iostream>
using namespace std;
class passAndReturnObj
{
private:
    int km, m;

public:
    void setDistance(int km, int m)
    {
        this->km = km;
        this->m = m;
        this->km = km;
        this->m = m;
    }
    passAndReturnObj addDistance(passAndReturnObj d1, passAndReturnObj d2)
    {
        passAndReturnObj obj;
        obj.km = d1.km + d2.km;
        obj.m = d1.m + d2.m;
        while (obj.m >= 1000)
        {
            obj.km += 1;
            obj.m -= 1000;
        }
        return obj;
    }
    void showDistance()
    {
        cout << "KM = " << obj.km << endl;
        cout << "M = " << obj.m << endl;
    }
};

int main()
{
    passAndReturnObj d1, d2, d3;
    int km1, m1;
    cout << "Enter km1 : ";
    cin >> km1;
    cout << "Enter m1 : ";
    cin >> m1;

    int km2, m2;
    cout << "Enter km2 : ";
    cin >> km2;
    cout << "Enter m2 : ";
    cin >> m2;

    d1.setDistance(km1, m1);
    d2.setDistance(km2, m2);

    d1.showDistance();
    d2.showDistance();

    d3 = d3.addDistance(d1, d2); // object and its all properties passed from here
    d3.showDistance();
}