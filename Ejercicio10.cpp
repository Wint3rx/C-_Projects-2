#include <iostream>
using namespace std;

int main (){
    float cal, suma = 0.0, prom;
    int reprobados=0, aprobados=0, total=0;
    cout<<"teclee calificacion (-1 para terminar): ";
    cin>>cal;
    while(cal !=-1){
        suma+=cal;
        if (cal>=61)
        aprobados++;
        else
        reprobados++;
        total++;
        cout<<"teclee calificacion (-1 para terminar): ";
        cin>>cal;
    }
    prom=suma/total;
    cout<<"Total de alumnos: "<<total<<endl;
    cout<<"Promedio: "<<prom<<endl;
    cout<<"# de aprobados: "<<aprobados<<endl;
    cout<<"# de reprobados: "<<reprobados<<endl;
}