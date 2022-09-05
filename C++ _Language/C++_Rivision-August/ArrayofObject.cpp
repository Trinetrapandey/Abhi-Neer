// Array of Object
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class Library
{
private:
    char name[500], author[500];

public:
    void getData()
    {
        cout << "Enter Book Name : ";
        cin.getline(name, 555);

        cout << "Enter Author Name : ";
        cin.getline(author, 555);
    }
    void printData()
    {
        cout << "Book Name : " << name << endl;
        cout << "Author Name : " << author << endl;
    }
};
int main()
{
    Library book[56];
    int num;
    cout << "Enter Book Numbers : ";
    cin >> num;
    getchar(); // To hold user input for string (data type)
    for (int i = 0; i < num; i++)
    {
        cout << "Enter " << i + 1 << " Book Details" << endl;
        book[i].getData();
    }
    // Now print data
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << " Book Details" << endl;
        book[i].printData();
    }
}