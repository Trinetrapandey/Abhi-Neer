// Static Data member and Static member function
#include <iostream>
using namespace std;
class studentDetails
{
private:
    static char name[45];
    int rNo;
    double per;

public:
    void setDetails(int rNo, double per)
    {
        this->rNo = rNo;
        this->per = per;
    }
    int showDetails()
    {
        cout << "-------- student details---------" << endl;
        cout << "Student Name : " << name << endl;
        cout << "Student rno : " << rNo << endl;
        cout << "Student per : " << per << endl;
    }
};
char studentDetails::name[] = "Steve Jobs"; // Data type of class is int
int main()
{
    studentDetails dts1, dts2;
    dts1.setDetails(45646345, 67.56);
    dts2.setDetails(3683434, 57.36);

    dts1.showDetails();
    dts2.showDetails();
}