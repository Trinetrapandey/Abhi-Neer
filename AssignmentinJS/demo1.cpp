#include <iostream>
using namespace std;
int main()
{

    string username;
    string password;

    int Attempt = 0;
    while (Attempt < 3)
    {
        cout << "Enter your username" << endl;
        cin >> username;
        cout << " Enter your password" << endl;
        cin >> password;
        if (username == "qwerty" && password == "ytrewq")
        {
            cout << "Welcome qwerty" << endl;
            break;
        }
        else if (username == "haimang" && password == "sharma")
        {
            cout << "Welcome haimang" << endl;
            break;
        }
        else
        {
            cout << "invalid attempt,try again" << endl;
            Attempt++;
        }
    }
    if (Attempt == 3)
    {
        cout << "Too many attempts" << endl;
    }
    cout << "Thank you for having us....." << endl;
    return 0;
}
