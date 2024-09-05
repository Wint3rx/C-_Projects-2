#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main (){
    char cadena[20];
    char cadena1[50];
    char cadena2[50];
    int tamano;
    cout<<"ingrese la primer cadena: ";
    cin.getline(cadena, 20);
    cout<<"ingrese la segunda cadena: ";
    cin.getline(cadena1, 50);
    strcat(cadena,cadena1);
    strcat(cadena,cadena2);
    tamano=strlen(cadena);
    cout<<"la cadena concatenada es: "<<cadena<<endl;
    cout<<"la cadena copiada es: "<<cadena1<<endl;
    cout<<"el tamaño de la cadena es: "<<tamano;
    getch();
}