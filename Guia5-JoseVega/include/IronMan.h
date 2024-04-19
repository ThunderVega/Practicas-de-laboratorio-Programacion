#ifndef IRONMAN_H
#define IRONMAN_H
#include <iostream>
#include "Humano.h"
using namespace std;


class IronMan: public Humano
{
    public:
        IronMan();
        IronMan(string n, int e, int s);
        virtual ~IronMan();
        void demostrarPoder();

    protected:

    private:
};


#endif // IRONMAN_H
