#include <iostream>

class Sekil {
    public:
        virtual void ciz() = 0;
};

class Cizimmodulu {
    public:
        void sekilciz(Sekil* sekil) {
            std::cout << "cizim modulu" << std::endl;
            sekil->ciz();
        }
};

class Kare: public Sekil {
    public:
        void ciz()
        {
            std::cout << "kare::sekil" << std::endl;
        }
};

int main()
{
    Cizimmodulu modul;
    Kare kare;

    modul.sekilciz(&kare);
}