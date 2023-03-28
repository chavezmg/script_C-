#include <iostream>
using namespace std;

int main(){
    //los strings acá no son bidimensionales como en C que hay que declararlos
    // autos[4][20] donde 4 es la cantidad de elementos y 20 la longitud de cada uno

    string autos[4] = {"Volvo", "Walskwagen", "Peugeot", "Audi"};
    int numeros [4] = {10, 20, 30, 40};
    string fideos[] = {"Moñitos", "Tirabuzon", "Coditos", "Mostachol"}; //podemos omitir
    //declarar el tamaño

    for (int i=0; i<sizeof(autos)/sizeof(autos[0]); i++){
        cout << autos[i] << "\n";
    }

    cout << "el tamano de autos es: " << sizeof(autos);

    return 0;
}