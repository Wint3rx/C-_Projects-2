#include <iostream>
using namespace std;

void intercambio (int x, int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<y<<endl;
}
int main (){
    int a=1, b=2;
    cout<<a<<b<<endl;
    intercambio (a,b);
    return 0;
}