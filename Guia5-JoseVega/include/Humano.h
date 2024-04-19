#ifndef HUMANO_H
#define HUMANO_H
#include <iostream>
#include <string.h>
using namespace std;

enum sexo
{
    MASCULINO,
    FEMENINO
};


class Humano
{
    public:
        Humano();
        Humano(string n, int e, int s);
        virtual ~Humano();
        void comer();
        void dormir();
        void caminar();
        void correr();

        string getNombre();
        int getEdad();
        int getSexo();

    protected:

    private:
        string nombre;
        int edad;
        int sexo;
};

#endif // HUMANO_H
