#ifndef VIUDANEGRA_H
#define VIUDANEGRA_H
#include <iostream>
#include "Humano.h"
using namespace std;


class ViudaNegra: public Humano
{
    public:
        ViudaNegra();
        ViudaNegra(string n, int e, int s);
        virtual ~ViudaNegra();
        void demostrarPoder();

    protected:

    private:
};

#endif // VIUDANEGRA_H
