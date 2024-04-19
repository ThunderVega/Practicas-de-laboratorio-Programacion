#include "Humano.h"

Humano::Humano()
{
    //ctor
}

Humano::Humano(string n, int e, int s)
{
    this->nombre = n;
    this->edad = e;
    this->sexo = s;

}

Humano::~Humano()
{
    //dtor
}

void Humano::comer()
{
    cout<<"*Empieza a comer...*"<<endl;
}

void Humano::caminar()
{
    cout<<"*Comienza a caminar...*"<<endl;
}

void Humano::correr()
{
    cout<<"*Comienza a correr...*"<<endl;
}

void Humano::dormir()
{
    cout<<"*Durmiendo...*"<<endl;
}


string Humano::getNombre()
{
    return this->nombre;
}

int Humano::getEdad()
{
    return this->edad;
}

int Humano::getSexo()
{
    return this->sexo;

}
