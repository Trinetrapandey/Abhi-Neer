// Deep Copy Constructor
/*
In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory resources with the same value to the object. In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well, if required. Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.
*/

// Copy Constructor
// Shallow Copy

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
        // this->name[45] = nm; not applicable
        strcpy(this->name, nm);
    }
    void displayData()
    {
        cout << "\n-------Student Details--------" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student Roll No : " << rNo << endl;
        cout << "Student Per : " << per << endl;
    }
    ~studentDetails(); // Destructor // Will free memory after execution
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

    studentDetails obj(name, rNo, per), obj1 = obj;
    obj.displayData();
    obj1.displayData();
}
