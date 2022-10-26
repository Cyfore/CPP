
#include "contact.hpp"

void		Contact::setFirstName(std::string arg) {this->_fname = arg;}
void        Contact::setLastName(std::string arg) {this->_lname = arg;}
void        Contact::setNickname(std::string arg) {this-> _nick = arg;}
void        Contact::setPhoneNum(std::string arg) {this-> _phone_num = arg;}
void        Contact::setSecret(std::string arg) {this-> _darkestsecret = arg;}

std::string	Contact::getFirstName() {return (this->_fname);}
std::string	Contact::getLastName() {return (this-> _lname);}
std::string	Contact::getNickname() {return (this-> _nick);}
std::string	Contact::getPhoneNum() {return (this-> _phone_num);}
std::string	Contact::getSecret() {return (this->_darkestsecret);}

Contact::Contact(){}

Contact::~Contact(){}

void Contact::add_contact()
{
	std::cout << "Input first name: ";
	std::cin >> this->_fname;
	std::cout << "Input last name: ";
	std::cin >> this->_lname;
	std::cout << "Input nick name: ";
	std::cin >> this->_nick;
	std::cout << "Input phone number: ";
	std::cin >> this->_phone_num;
	std::cout << "Input darkest secret: ";
	std::cin >> this->_darkestsecret;
}

void		Contact::printContact() {
	std::cout << "First name : " << this->_fname << std::endl;
	std::cout << "Last name: " << this->_lname << std::endl;
	std::cout << "Nickname: " << this->_nick << std::endl;
	std::cout << "Phone number: " << this->_phone_num << std::endl;
	std::cout << "Secret: " << this->_darkestsecret << std::endl;
}
