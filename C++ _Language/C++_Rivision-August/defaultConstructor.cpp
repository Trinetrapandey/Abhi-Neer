#include <iostream>
using namespace std;
class studentDetails
{
private:
    char name[45] = "Jeff Bezos";
    int rNo = 174229116;
    double per = 92.66;

public:
    studentDetails()
    {
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