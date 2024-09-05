#include <iostream>
using namespace std;

int cuadrado (int x){
int r;
r=x*x;
return r;
}
int main (){
    int i, resultado;
    for (i=0;i<10;i++){
        resultado = cuadrado (i);
        cout<<"Cuadrado de "<<i<<" es..: "<<resultado<<endl;
    }
    return 0;
}