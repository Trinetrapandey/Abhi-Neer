#include <iostream>
using namespace std;
class staticDM
{
    // cout << staticDM::count << endl;   not usable

private:
    static int count;

public:
    staticDM()
    {
        count++;
        cout << staticDM::count << endl;
    }
};
int staticDM::count = 0; // Data type of class is int
int main()
{
    staticDM d1;
}