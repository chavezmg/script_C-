#include <iostream>
using namespace std;
//la sobre carga de funciones es declarar func con el mismo nombre pero que
//se diferencian por tener distintos argumentos

int funcion (int x){
    return x+5;
}
double funcion (double x){
    return x+5;
}
double funcion (double x, double y){
    return x+y;
}


int main(){
    int num1 = funcion(5);
    double num2 = funcion(4.3);
    double num3= funcion(5.2, 9.3);

    return 0;
}