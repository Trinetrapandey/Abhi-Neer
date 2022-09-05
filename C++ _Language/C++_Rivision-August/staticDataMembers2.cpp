#include <iostream>
using namespace std;
class staticMF
{
    // cout << staticDM::count << endl;   not usable

private:
    static int count;

public:
    staticMF()
    {
        count++;
        cout << staticMF::count << endl;
    }
    static int getCount()
    {
        return count++;
    }
};
int staticMF::count = 0; // Data type of class is int
int main()
{
    staticMF d1;
    int c = staticMF ::getCount();
    cout << "Count = " << c << endl;
    cout << "Count by function = " << staticMF ::getCount() << endl; // Accessible
}