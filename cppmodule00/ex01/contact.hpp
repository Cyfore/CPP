#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class   Contact
{
    private:
        std::string _fname;
        std::string _lname;
        std::string _nick;
        std::string _phone_num;
        std::string _darkestsecret;
    public:

        Contact();
	    ~Contact();

        std::string getFirstName();
        std::string getLastName();
        std::string getNickname();
        std::string getPhoneNum();
        std::string getSecret();

        void    setFirstName(std::string arg);
        void    setLastName(std::string arg);
        void    setNickname(std::string arg);
        void    setPhoneNum(std::string arg);
        void    setSecret(std::string arg);

        void    add_contact();
        void    printContact();
};

#endif