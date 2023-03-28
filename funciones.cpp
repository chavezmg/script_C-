#include <iostream>
using namespace std;

void funcion(string name){
    cout << name << "\n";
}

void funcion2(string name="valor por defecto"){
    cout << name << "\n";
}

void funcion3(string name="valor por defecto", int edad= 15){
    cout << name << "\n";
    cout << edad << "\n";
}

int funcion4(int x, int y){
    return x+y;
}

void swap(int &x, int &y){ //pasamos argumento por referencia, cualquier modificacion
                           //modificará las variables originales,
    x = x+5;
    y = x+3;
}

void arreglo(int numeros[5]){   //podemos pasar una funcion como argumento
    for(int i=0; i<5; i++){
        cout << numeros[i] << "\n";
    }
}

int main(){
    int x = 0;
    int y = 0;
    int numeros[5] = {10,20,30,40,50};

    funcion("Putaso");
    funcion2();
    funcion3("trolo", 50);
    cout << funcion4(5,9) << "\n";


    cout << x << " " << y <<"\n";
    swap(x,y);
    cout << x << " " << y <<"\n";

    arreglo(numeros); //pasamos un arreglo como argumento

    return 0;
}