#include <iostream>
using namespace std;
class staticDM
{
public:
    static int count;
    staticDM()
    {
        count++;
    }
};
int staticDM::count = 0; // Data type of class is int
int main()
{
    staticDM d1;
    cout << staticDM::count << endl;
}