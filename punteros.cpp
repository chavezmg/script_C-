#include <iostream>
using namespace std;

int main(){

    string food = "Pizza";

    cout << food << "\n";   //imprime pizza
    cout << &food << "\n";  //imprime la direccion de memoria de "food"

    //A pointer is a variable that stores the memory address as its value.

    string * pfood = &food;
    cout << pfood << "\n"; //asi imprime lo que tiene adentro: la direccion de memoria de food
    cout << *pfood << "\n";; //asi imprime el valor que tinee la direccion a la que apunta
    cout << &pfood << "\n";; //asi imprime su propia direccion de memoria

    return 0;
}