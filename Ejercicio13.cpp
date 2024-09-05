#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    const int TAM=3;
    int matriz [TAM][TAM];
    for(int i=0; i<TAM; i++)
    {
        for(int j=0; j<TAM; j++)
        {
            cout<<"Ingrese el elemento"<<i<<j;
            cin>>matriz[i][j];
        }
    }
    system("pause");
}