#include <iostream>
#include <stdlib.h>
using namespace std;
int factorial (int n){
    if (n==1)
    return 1;
    else
    return n * factorial(n-1);
}
int main (){
    int n;
    cout<<"ingrese un numero: ";
    cin>>n;
    cout<<"El factorial es: "<<factorial(n)<<endl;
    system("pause");
}