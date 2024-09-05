#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main (){
string password="";

cout<<"Ingrese la contraseña: ";
cin>>password;

if (password=="myClave")
{
    cout<<"Contraseña correcta. Bienvenido";
}
else
{
    cout<<"Contraseña incorrecta";
}
system("Pause");
}