/*
Programa_47

funciones sin parametros.
prototipos, variables globales.

Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 16 de abril de 2015
*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void multiplicacion (); // prototipo
void division (); // prototipo

float x,y,z; // variables globales

int main()
{
int opcion;

do
{
    system ("cls");

    cout << "\n\t\aPrograma de Multiplicaion y Division" << endl;

    cout<<"\n\n\t######################";
    cout<<"\n\n\t#                    #";
    cout<<"\n\n\t# MENU               #";
    cout<<"\n\n\t#                    #";
    cout<<"\n\n\t# 1.-Multiplicacion  #";
    cout<<"\n\n\t# 2.-Division        #";
    cout<<"\n\n\t# 3.-Salir           #";
    cout<<"\n\n\t#                    #";
    cout<<"\n\n\t######################";
    cout<<"\n\n\t#                    ";
    cin>>opcion;

    if (opcion==1){
    multiplicacion();
    }
    else if (opcion==2){
    division();
    }

}while (opcion!=3);

    return 0;
}

void multiplicacion()
{
    system ("cls");
    cout<<"\n\tLa Multiplicacion \n";

    cout<<"\n\n\tDame un numero: ";
    cin>>x;
    cout<<"\n\n\tDame un numero: ";
    cin>>y;
    z=x*y;
    cout<<"\n\n\tLa multiplicacion es: "<<z;

cout<<"\n\n\t\t\t";
system ("pause");
}

void division()
{
    system ("cls");
    cout<<"\n\tLa Divison \n";
    cout<<"\n\n\tDame un numero: ";
    cin>>x;
    cout<<"\n\n\tDame un numero: ";
    cin>>y;
    z=x/y;
    cout<<"\n\n\tLa division es:       "<<z;

cout<<"\n\n\t\t\t";
system ("pause");
}
