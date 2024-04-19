#include "Thor.h"
#include "Humano.h"

Thor::Thor()
{
    //ctor
}

Thor::Thor(string n, int e, int s):Humano(n,e,s)
{
}

void Thor::demostrarPoder()
{

    cout<<"Caracteristicas:\n"<<endl;
    cout<<"- Super fuerza"<<endl;
    cout<<"- Super resistencia"<<endl;
    cout<<"- Capacidad de Volar"<<endl;
    cout<<"- Capacidad de viajar entre mundos"<<endl;
    cout<<"- Dominio absoluto sobre Mjolnir"<<endl;

}


Thor::~Thor()
{
    //dtor
}
