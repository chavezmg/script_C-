#include <iostream>
using namespace std;

class MyClass{
    public:
        int num;
        string palabra;
        void metodo(){
            cout << "\nHola mundo!\n";
        }
        void metodo2(); //este metodo lo vamos a definir afuera de la clase
};

void MyClass::metodo2(){
    cout << "\nEste metodo fue declarado afuera de la clase!\n";
}

//publico significa que puede ser llamado desde fuera de la clase
//privado, solo dentro de la clase
int main(){
    
    MyClass objeto1;
    objeto1.num = 50;
    objeto1.palabra = "Matias";
    cout << "Hola " << objeto1.palabra << " tenes " << objeto1.num;
    objeto1.metodo();
    objeto1.metodo2();
    
    return 0;
}