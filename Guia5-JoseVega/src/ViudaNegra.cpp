#include "ViudaNegra.h"

#include "Humano.h"

ViudaNegra::ViudaNegra()
{
    //ctor
}

ViudaNegra::ViudaNegra(string n, int e, int s):Humano(n,e,s)
{
}

void ViudaNegra::demostrarPoder()
{

    cout<<"Caracteristicas:\n"<<endl;
    cout<<"- Inteligencia elevada"<<endl;
    cout<<"- Estrategia elevada "<<endl;
    cout<<"- Espionaje experto"<<endl;
    cout<<"- Combate experto"<<endl;
    cout<<"- Belleza"<<endl;

}


ViudaNegra::~ViudaNegra()
{
    //dtor
}
