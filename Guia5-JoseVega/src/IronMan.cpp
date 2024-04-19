#include "IronMan.h"
#include "Humano.h"

IronMan::IronMan()
{
    //ctor
}

IronMan::IronMan(string n, int e, int s):Humano(n,e,s)
{
}

void IronMan::demostrarPoder()
{

    cout<<"Caracteristicas:\n"<<endl;
    cout<<"- Genio natural"<<endl;
    cout<<"- Armadura Mark 50 con:"<<endl;
    cout<<"> Capacidad de volar"<<endl;
    cout<<"> Capacidad de disparar rayos"<<endl;
    cout<<"> Capacidad desplegar metrallas"<<endl;
    cout<<"> Capacidad disparar proyectiles"<<endl;

}


IronMan::~IronMan()
{
    //dtor
}
