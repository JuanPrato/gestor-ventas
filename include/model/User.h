#ifndef USER_H
#define USER_H

#include <string>

using namespace std;

class User {
    private:
        char _username[50];
        char _email[50];
        char _password[50];
        int _role;

    public:
        User();
        User(string username, string email, string password, int role);
        string getEmail();
        string getPassword();
        string getUsername();
        //void setEmail(string email);
        //void setUsername(string username);
        //void setPassword(string password);
        //void setRole(int role);

    protected:
};

#endif // USER_H
