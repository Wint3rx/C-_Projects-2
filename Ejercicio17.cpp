#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
    typedef char cadena[20];
    cadena cadena1[2];
    int i;
    for (i=0;i<2;i++){
        cout<<"ingrese la cadena: ";
        cin.getline(cadena1[i],20);
}
    for(i=0;i<2;i++){
        cout<<cadena1[i]<<endl;
        getch();
    }
}