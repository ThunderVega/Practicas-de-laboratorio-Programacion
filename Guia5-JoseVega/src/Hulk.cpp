#include "Hulk.h"
#include "Humano.h"

Hulk::Hulk()
{
    //ctor
}

Hulk::Hulk(string n, int e, int s):Humano(n,e,s)
{
}

void Hulk::demostrarPoder()
{

    cout<<"Caracteristicas:\n"<<endl;
    cout<<"- Fuerza descomunal"<<endl;
    cout<<"- Resistencia descomunal"<<endl;
    cout<<"- Velocidad descomunal"<<endl;
    cout<<"- Regeneracion acelerada"<<endl;
    cout<<"- Supervivencia garantizada"<<endl;


}


Hulk::~Hulk()
{
    //dtor
}
