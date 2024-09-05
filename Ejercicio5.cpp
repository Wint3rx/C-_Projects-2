#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    enum dias_semana{LUNES=1, MARTES=2, MIERCOLES=3, JUEVES=4, VIERNES=5, SABADO=6, DOMINGO=7};
    dias_semana dia;
    dia=LUNES;
    cout<<"El dia Lunes esta en la posicion: "<<dia<<endl;
    system("pause");
}