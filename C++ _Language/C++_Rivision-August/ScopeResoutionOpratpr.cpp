#include <iostream>
using namespace std;
int no = 100;
int main()
{

    cout << "Global no = " << no << endl;
    int no = 200;
    cout << "Local no = " << no << endl;
    {
        int no = 300; // Local to main function
        cout << "Local to main function no = " << no << endl;
    }
}
