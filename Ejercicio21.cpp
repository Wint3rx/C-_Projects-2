#include <iostream>
#include <stdlib.h>
using namespace std;
int fibonacci(int n){
    if (n<2)
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"ingrese un numero: ";
    cin>>n;
    cout<<"la sucesion de Fibonacci es: "<<fibonacci(n)<<endl;
    system("pause");
}