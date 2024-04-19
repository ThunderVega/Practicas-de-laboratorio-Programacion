#ifndef CAPITANAMERICA_H
#define CAPITANAMERICA_H
#include <iostream>
#include "Humano.h"
using namespace std;

class CapitanAmerica : public Humano
{
    public:
        CapitanAmerica();
        CapitanAmerica(string n, int e, int s);
        virtual ~CapitanAmerica();
        void demostrarPoder();

    protected:

    private:
};

#endif // CAPITANAMERICA_H
