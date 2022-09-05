#include <iostream>
using namespace std;

class Demo
{
public:
    void show(); // Declaration
    void display();
};
void Demo ::show() // Definition
{

    cout << "show of Demo" << endl;
};
void Demo ::display()
{
    cout << "display of Demo" << endl;
}
int main()
{
    class Demo obj; // or
    obj.show();
    obj.display();
}