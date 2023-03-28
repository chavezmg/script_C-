#include <iostream>
using namespace std;

int main(){

    char frase[]{"Hola me llamo matias"};
    int arreglo[]{10,20,30,40,10,50};

    for (auto i : arreglo){ //con este for imprimimos cada elemento del arreglo
        cout << i << endl;
    }

    for (int i = 0; i<size(frase); i++){  //con size obtenemos la longitud del arreglo
        cout << frase[i];
    }   
    
    return 0;
}