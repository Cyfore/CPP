#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class Phonebook
{
    private:
        Contact _contacts[8];
        int _index;
    public:
        Phonebook();
	    ~Phonebook();

        void    add(int i);
        void    search();
        int     get_count();  
};

#endif