// Hybrid Inheritance - Combination o  multiple and other inheritance
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class student
{
protected:
    int rno;
    char name[45];
};
class marks : public student
{
protected:
    int p, c, m;
};
class sessoinal
{
protected:
    int in, ex;
};
class result : public marks, sessoinal
{
public:
    void setData(char name[], int rno, int p, int c, int m, int in, int ex)
    {
        strcpy(this->name, name);
        this->rno = rno;
        this->p = p;
        this->c = c;
        this->m = m;
        this->in = in;
        this->ex = ex;
    }
    void displayData()
    {
        cout << "---------Student Details----------";
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rno << endl;
        cout << "Physics Marks : " << p << endl;
        cout << "Chemistry Marks : " << c << endl;
        cout << "Maths Marks : " << m << endl;
        cout << "Internal Marks : " << in << endl;
        cout << "External Marks : " << ex << endl;
    }
};
int main()
{
    char name[345];
    int rno, p, c, m, in, ex;
    result obj;
    cout << "Enter Name: ";
    cin.getline(name, 34);
    cout << "Enter Roll No : ";
    cin >> rno;
    cout << "Enter Physics Marks : ";
    cin >> p;
    cout << "Enter Chemistry Marks : ";
    cin >> c;
    cout << "Enter Maths Marks : ";
    cin >> m;
    cout << "Enter internal Marks : ";
    cin >> in;
    cout << "Enter External Marks : ";
    cin >> ex;
    obj.setData(name, rno, p, c, m, in, ex);
    obj.displayData();
}