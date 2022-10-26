#include "iostream"

using namespace std;

class Hayvan {
    private:
        int a;
    public:
        virtual void konus()
        {
            cout << "konusamiyor" << endl;
        }
};

class Kedi : Hayvan {
    private:
        int b;
    public:
        void konus()
        {
            cout << "miyaw" << endl;
        }
};

class Kopek : Hayvan {
    private:
        int c;
    public:
        void konus()
        {
            cout << "hav hav" << endl;
        }    
};

int main(void)
{
    Kopek k;
    Hayvan h;
    Kedi ke;

    k.konus();
    ke.konus();
    h.konus();

    Hayvan *r = (Hayvan *) &k;

    r->konus();
}