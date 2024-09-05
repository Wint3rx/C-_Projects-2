#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    float suma = 0.0, num, promedio;
    int contador = 0;
    cout<<"Teclea un numero (-1 = fin )";
    cin>>num;
    while (num !=1){
        suma = suma + num;
        contador = contador + 1;
        cout<<"Teclee un numero (-1 = fin): ";
        cin>>num;
    }
    if (contador>0){
        promedio = suma/contador;
        cout<<"\nEL pormedio es: "<<promedio<<endl;
    }
    else
        cout<<"\nNo se teclearon valores: "<<endl;
    getch();
}