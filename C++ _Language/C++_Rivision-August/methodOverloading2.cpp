//
#include <iostream>
using namespace std;
class RBI
{
public:
    double iRate()
    {
        return 2;
    }
};
class PNB : public RBI
{
public:
    double iRate()
    {
        return 2.5;
    }
};
class SBI : public RBI
{
public:
    double iRate()
    {
        return 2.2;
    }
};
class BOI : public RBI
{
    // public:
    //     double iRate()
    //     {
    //         return 2.8;
    //     }
};

int main()
{
    RBI robj;
    cout << "RBI intrest rate = " << robj.iRate() << endl;

    PNB pobj;
    cout << "PNB intrest rate = " << pobj.iRate() << endl;

    SBI sobj;
    cout << "SBI intrest rate = " << sobj.iRate() << endl;

    BOI bobj;
    // method overriding
    cout << "BOI intrest rate = " << bobj.iRate() << endl;
}
