#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int numero;
    cout<<"ingrese un numero: ";
    cin>>numero;
    while(numero<=100)
    {
        cout<<"ingrese un numero: ";
        cin>>numero;
    }
    system("pause");
    return 0;
}