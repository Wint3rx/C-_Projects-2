#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
void escribir(){
    ofstream archivo;
    archivo.open("C:/Users/FRANKLIN/OneDrive/Documentos/si.txt",ios::out);
    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    archivo<<"hola que tal? Mi nombre es Frank";
    archivo.close();
}
int main(){
    escribir();
    system("pause");
    return 0;
}