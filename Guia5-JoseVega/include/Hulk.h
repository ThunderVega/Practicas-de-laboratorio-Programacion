#ifndef HULK_H
#define HULK_H
#include <iostream>
#include "Humano.h"
using namespace std;


class Hulk: public Humano
{
    public:
        Hulk();
        Hulk(string n, int e, int s);
        virtual ~Hulk();
        void demostrarPoder();

    protected:

    private:
};

#endif // HULK_H
