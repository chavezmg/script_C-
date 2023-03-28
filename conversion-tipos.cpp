#include <iostream>
using namespace std;

int main(){

    int x = 3.14;
    double y = 3.14;
    cout << x << "\n";
    cout << y << "\n";

    //si hago una conversion de tipos:
    double z = (int) 3.14;
    cout << z << "\n";

    //conversion explicita
    char a = 100;
    cout << a << "\n";
    //o de otra forma

    cout << (char)100 << "\n";;

    //ejemplo de aplicacion
    int correcto = 8;
    int preguntas = 10;
    double puntaje = correcto/preguntas * 100;
    cout << puntaje << "\n"; //nos da 0..está mal

    //ahora haciendo converson explicita
    puntaje = correcto/(double)preguntas * 100;
    cout << puntaje << "%d\n";
    //ahora nos dio bien

    return 0;
}