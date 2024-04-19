#include "CapitanAmerica.h"
#include "Humano.h"

CapitanAmerica::CapitanAmerica()
{
    //ctor
}

CapitanAmerica::CapitanAmerica(string n, int e, int s):Humano(n,e,s)
{
}

void CapitanAmerica::demostrarPoder()
{

    cout<<"Caracteristicas:\n"<<endl;
    cout<<"- Estrategia aumentada"<<endl;
    cout<<"- Fuerza aumentada"<<endl;
    cout<<"- Velocidad aumentada"<<endl;
    cout<<"- Resistencia aumentada"<<endl;
    cout<<"- Combate nivel maestro"<<endl;

}


CapitanAmerica::~CapitanAmerica()
{
    //dtor
}
