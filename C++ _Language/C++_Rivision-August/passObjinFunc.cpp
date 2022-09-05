// Passing object in a function
#include <iostream>
using namespace std;
class dist
{
private:
    int km, m;

public:
    void setDistance(int km, int m)
    {
        this->km = km;
        this->m = m;
    }

    void displayDistance()
    {

        cout << "KM = " << km << endl
             << "M = " << m << endl;
    }
    void addDistance(dist d1, dist d2)
    {
        km = d1.km + d2.km;
        m = d1.m + d2.m;
        while (m >= 1000)
        {
            km += 1;
            m -= 1000;
        }
    }
};
int main()
{
    int km1, m1, km2, m2;
    cout << "Enter km1 : ";
    cin >> km1;
    cout << "Enter m1 : ";
    cin >> m1;

    cout << "Enter km2 : ";
    cin >> km2;
    cout << "Enter m2 : ";
    cin >> m2;

    dist d1, d2, d3;
    d1.setDistance(km1, m1);
    d2.setDistance(km2, m2);

    d3.addDistance(d1, d2);

    // d1.displayDistance();
    // d2.displayDistance();
    d3.displayDistance();
}