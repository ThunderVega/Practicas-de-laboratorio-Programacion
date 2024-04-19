#ifndef THOR_H
#define THOR_H
#include <iostream>
#include "Humano.h"
using namespace std;


class Thor: public Humano
{
    public:
        Thor();
        Thor(string n, int e, int s);
        virtual ~Thor();
        void demostrarPoder();

    protected:

    private:
};

#endif // THOR_H
