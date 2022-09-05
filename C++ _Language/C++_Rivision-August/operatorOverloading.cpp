#include <iostream>
using namespace std;
class operatorOverlaod
{
private:
    int num;

public:
    operatorOverlaod()
    {
        cout << "Enter a number : ";
        cin >> num;
    }
    void display()
    {
        cout << "Number : " << num << endl;
    }
    void operator++()
    {
        num *= 100;
    }
};
int main()
{
    operatorOverlaod obj;
    obj.display();
    ++obj;
    cout << "After Overloading" << endl;
    obj.display();
}