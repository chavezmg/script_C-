/*
Templates de funciones, nos permite realizar una especie de sobrecarga de funciones
para darle dinamismo a la misma, de esta forma puede recibir parametros de distintos tipos de datos
y devolver datos de distinto tipo
*/

#include <iostream>
template <typename T, typename U>
auto mayor(T x, U y){
    return (x > y) ? x : y;
}
//recibe un tipo de valor variable y otro tipo de valor tambien variable
//con auto indicamos que determine automaticamente que tipo de dato devolver

int main(){

    std::cout << mayor(1, 2) << "\n";
    std::cout << mayor(1, 2.1) << "\n";
    std::cout << mayor('2', '3') << "\n";

    return 0;
}