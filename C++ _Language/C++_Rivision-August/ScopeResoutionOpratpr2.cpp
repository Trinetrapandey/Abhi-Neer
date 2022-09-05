// :: used to access value (data members and member functions) of any partiular class
#include <iostream>
using namespace std;
class Demo
{
public:
    void show(); // Declaration
    void display();
};

class Demo1
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

void Demo1 ::show() // Definition
{

    cout << "show of Demo1" << endl;
};
void Demo1 ::display()
{
    cout << "display of Demo1" << endl;
}
int main()
{
    class Demo obj;
    class Demo1 obj1;
    obj.show();
    obj.display();

    obj1.show();
    obj1.display();
}