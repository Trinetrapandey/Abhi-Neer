// Class and Object
#include <iostream>
using namespace std;
class StudentDetails
{
private:
    string name = "Nirnjan Patel";
    int rno = 34324243;
    double per = 56.34;

public:
    void showDetails()
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rno << endl;
        cout << "Percentages = " << per << endl;
    }
};

int main()
{
    cout << "Student Details : " << endl;
    StudentDetails obj;
    obj.showDetails();

    // cout << "Student Details : \n"
    //     //  << (obj.showDetails()) << endl;

    // cout << "Name = " << obj.name << endl;
    // cout << "Name = " << obj.rno << endl;
    // cout << "Name = " << obj.per << endl;
}
