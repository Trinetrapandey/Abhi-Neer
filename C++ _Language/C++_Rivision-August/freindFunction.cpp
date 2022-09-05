#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Rectangle
{
private:
    int l, w;

public:
    void setData(int l, int w)
    {
        this->l = l;
        this->w = w;
    }
    friend void displayData(Rectangle rec); // Only declaration here
    friend int area(Rectangle rec);
};

void displayData(Rectangle rec) // Outside class // Only definition here
{
    cout << "Lenght : " << rec.l << endl;
    cout << "Width : " << rec.w << endl;
}
int area(Rectangle rec)
{
    int area = rec.l * rec.w;
    return area;
}
int main()
{
    Rectangle rec;
    int l, w;
    cout << "Enter Lenght : ";
    cin >> l;
    cout << "Enter Width : ";
    cin >> w;
    rec.setData(l, w);
    displayData(rec);
    int a = area(rec);
    cout << "Area = " << a << endl;
}
