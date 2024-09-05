#include <iostream>
#include <stdlib.h>
#include <ctype.h>
using namespace std;
int main(){
    int a;
    char numero=7;
    a= numero=7;
    a= isdigit(numero);
if(a==0){
    cout<<"no es un digito\n";
} else{
    cout<<"el digito es: "<<numero<<endl;
}
system("pause");
}