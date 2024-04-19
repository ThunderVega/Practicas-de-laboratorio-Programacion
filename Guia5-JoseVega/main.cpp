#include <iostream>
#include "CapitanAmerica.h"
#include "IronMan.h"
#include "ViudaNegra.h"
#include "Hulk.h"
#include "Thor.h"

using namespace std;
#define TAM 5

int Menu()
{
    int op;
    cout<<"Menu de heroes\n";
    cout<<"1. Capitan America\n";
    cout<<"2. Iron Man\n";
    cout<<"3. Viuda Negra\n";
    cout<<"4. Hulk\n";
    cout<<"5. Thor\n";
    cout<<"6. Salir\n\n";
    cout<<"Digite la opcion: ";
    cin >>op;

    return op;
}

void MostrarInfo(Humano *lstV)
{
    cout<<"Nombre: " << lstV->getNombre()<<endl;
    cout<<"  Edad: " << lstV->getEdad()<<endl;

    if(lstV->getSexo()==0)
    {
        cout<<"Genero: Masculino"<<endl;
    }
    else
    {
        cout<<"Genero: Femenino"<<endl;
    }

}



void MenuH(Humano *LstV[], int i)
{
    string Vengador[TAM] = {"Capitan America", "Iron Man", "Viuda Negra", "Hulk", "Thor"};

    int op;
    do
    {
        system("cls");
        cout<<Vengador[i]<<":"<<endl;
        cout<<"1. Comer\n";
        cout<<"2. Caminar\n";
        cout<<"3. Correr\n";
        cout<<"4. Dormir\n";
        cout<<"5. Mostrar poder\n";
        cout<<"6. Regresar\n\n";
        cout<<"Digite la opcion: ";
        cin >>op;

        cout<<"\n";
        switch(op)
        {
            case 1:
                LstV[i]->comer();
            break;

            case 2:
                LstV[i]->caminar();
            break;

            case 3:
                LstV[i]->correr();
            break;

            case 4:
                LstV[i]->dormir();
            break;

            case 5:
                if(i == 0)
                {
                    CapitanAmerica *cap = (CapitanAmerica*) LstV[i];
                    cout<<"[Informacion]====================\n"<<endl;
                    MostrarInfo(LstV[i]);
                    cout<<"\n=================================\n"<<endl;
                    cap->demostrarPoder();
                    cout<<"\n=================================\n"<<endl;
                }
                else
                {
                    if(i == 1)
                    {
                        IronMan *ir = (IronMan*) LstV[i];
                        cout<<"[Informacion]====================\n"<<endl;
                        MostrarInfo(LstV[i]);
                        cout<<"\n=================================\n"<<endl;
                        ir->demostrarPoder();
                        cout<<"\n=================================\n"<<endl;
                    }
                    else
                    {
                        if(i == 2)
                        {
                            ViudaNegra *vn = (ViudaNegra*) LstV[i];
                            cout<<"[Informacion]====================\n"<<endl;
                            MostrarInfo(LstV[i]);
                            cout<<"\n=================================\n"<<endl;
                            vn->demostrarPoder();
                            cout<<"\n=================================\n"<<endl;
                        }
                       else
                        {
                            if(i == 3)
                            {
                                Hulk *hk = (Hulk*) LstV[i];
                                cout<<"[Informacion]====================\n"<<endl;
                                MostrarInfo(LstV[i]);
                                cout<<"\n=================================\n"<<endl;
                                hk->demostrarPoder();
                                cout<<"\n=================================\n"<<endl;
                            }

                            else
                            {
                                if(i == 4)
                                {
                                    Thor *tr = (Thor*) LstV[i];
                                    cout<<"[Informacion]====================\n"<<endl;
                                    MostrarInfo(LstV[i]);
                                    cout<<"\n=================================\n"<<endl;
                                    tr->demostrarPoder();
                                    cout<<"\n=================================\n"<<endl;
                                }
                            }
                        }

                    }



                }

            break;

            case 6:
                cout<<"Regresando..."<<endl;
            break;

            default:
                cout<<"Opcion no valida..."<<endl;
            break;

        }
        cout<<"\n";
        system("pause");


    }while(op!=6);
}


int main()
{
    Humano *Vengadores[TAM];

    CapitanAmerica *cap;
    IronMan *ir;
    ViudaNegra *vn;
    Hulk *hk;
    Thor *tr;

    cap = new CapitanAmerica("Steve Rogers", 39, MASCULINO);
    ir = new IronMan ("Tony Stark", 53, MASCULINO);
    vn = new ViudaNegra("Natasha Romanova", 38, FEMENINO);
    hk = new Hulk("Bruce Banner", 56, MASCULINO);
    tr = new Thor("Thor Odinson", 1500, MASCULINO);

    Vengadores[0] = cap;
    Vengadores[1] = ir;
    Vengadores[2] = vn;
    Vengadores[3] = hk;
    Vengadores[4] = tr;

    int op;


    do
    {
        system("cls");
        op=Menu();

        switch(op)
        {
            case 1:
                MenuH(Vengadores, 0);
            break;
            case 2:
                MenuH(Vengadores, 1);
            break;
            case 3:
                MenuH(Vengadores, 2);
            break;
            case 4:
                MenuH(Vengadores, 3);
            break;
            case 5:
                MenuH(Vengadores, 4);
            break;
            case 6:

                cout<<"\nSaliendo...\n\n"<<endl;
                system("pause");

            break;

            default:
                cout<<"\nOpcion no valida...\n\n"<<endl;
                system("pause");
            break;

        }


    }while(op!=6);

    return 0;
}
