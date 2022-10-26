#pragma 
#include <iostream>
#include <cctype>
using namespace std;

class User
{

    public:
        string first_name;
        string last_name;
        string status;
        string get_status();
        int maxspeed(int maxspeed);
        User(string _first_name, string _last_name, string _status);

};

User::User(string _first_name, string _last_name, string _status)
{
    first_name = _first_name;
    last_name = _last_name;
    status = _status;
}

int User::maxspeed(int maxspeed)
{
    return maxspeed;
}

class Base{
    public:
        void foo()
        {
            cout << "Base Foo \n";
        };
};

class Derived : Base {
    public:
        void foo()
        {
            cout << "Derived Foo \n";
        };
        void bar() {
            Derived::foo();
            Base::foo();
        }
};

std::string User::get_status()
        {
            status = "Champion";
            return status;
        };