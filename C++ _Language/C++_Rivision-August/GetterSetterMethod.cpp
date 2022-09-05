// Class and Object
#include <iostream>
#include <string.h>
using namespace std;
class GetterSeter
{
private:
    string email, password;

public:
    void setEmail(string email)
    {
        this->email = email;
    }

    void setPassword(string password)
    {
        this->password = password;
    }

    string showEmail()
    {
        return email;
    }
    string showPassword()
    {
        return password;
    }
};

int main()
{
    string email, password;
    cout << "Enter Email : ";
    getline(cin, email);
    // cin.getline(email);
    // cin >> email;
    cout << "Enter Password : ";
    getline(cin, password);
    GetterSeter obj;
    obj.setEmail(email);
    obj.setPassword(password);

    string se = obj.showEmail();
    string sp = obj.showPassword();

    cout << "Email = " << se << endl;
    cout << "Password = " << sp << endl;
}
