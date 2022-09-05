#include <iostream>
#include <stdio.h>
using namespace std;
class studentDetails
{
private:
    char name[45];
    int rNo;
    double per;

public:
    studentDetails()
    {
        cout << "Enter Name : ";
        cin.getline(name, 23); // After space characters will be printed
        cout << "Enter Rno : ";
        cin >> rNo;
        getchar();
        cout << "Enter per : ";
        cin >> per;

        displayData();
    }
    void displayData()
    {
        cout << "\n-------Student Details--------" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Roll No : " << rNo << endl;
        cout << "Student Per : " << per << endl;
    }
};
int main()
{
    studentDetails obj;
}