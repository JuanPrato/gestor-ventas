#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User
{
    public:
        User();
        //User(string email, string password, int role);
        string getEmail();
        string getPassword();
        void setEmail(string email);
        void setPassword(string password);
        void setRole(int role);

    protected:

    private:
        string _email;
        string _password;
        int _role;
};

#endif // USER_H
