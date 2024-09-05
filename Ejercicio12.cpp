#include<iostream>
#include<stdlib.h>

using namespace std;

int main (){

int dim;

cout<<"Ingrese la dimension del vector"<<endl;
cin>>dim;

int*vector = new int [dim];

for (int i=0 ; i< dim; i++){
    vector [i]= i * 10 ;
    cout<<vector[i]<<endl;

}

system("pause");
}