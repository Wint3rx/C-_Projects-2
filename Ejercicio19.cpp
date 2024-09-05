#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
    char cadena[]="Ingenieria";
    char cadena1[]="MiCarrera";
    int tamano;
    strcat(cadena,cadena1);
    tamano=strlen(cadena);
    cout<<"la cadena concatenada es: "<<cadena1<<endl;
    cout<<"la cadena copiada es: "<<cadena<<endl;
    cout<<"el tamano de la cadena es: "<<tamano;
}