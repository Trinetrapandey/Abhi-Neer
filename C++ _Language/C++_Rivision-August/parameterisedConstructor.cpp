// PArameterised Constructor
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class studentDetails
{
private:
    char name[45];
    int rNo;
    double per;

public:
    studentDetails(char nm[34], int rn, double pr)
    {
        this->rNo = rn;
        this->per = pr;
        // this->name[45] = nm;
        strcpy(this->name, nm);
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
    char name[45];
    int rNo;
    double per;

    cout << "Enter Name : ";
    cin.getline(name, 23); // After space characters will be printed
    cout << "Enter Rno : ";
    cin >> rNo;
    getchar();
    cout << "Enter per : ";
    cin >> per;

    studentDetails obj(name, rNo, per);
    obj.displayData();
}