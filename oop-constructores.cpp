#include <iostream>
using namespace std;

//public: accesible desde fuera de la clase
//private: accesible solo desde dentro de la clase
//protected: pueden ser accedidos por objetos que hayan heredado

class MyClass {
    public:
    string nombre;
    int edad;
    int id;
        MyClass(string nombrep, int edadp, int idp){  //los constructores llevan el mismo nombre de la clase
                    //se ejecutan cuando se crea el objeto, pueden llevar parametros
                    //no llevan el mismo nombre que otras variables
            cout << "Este es un constructor";
            nombre = nombrep;
            edad = edadp;
            id = idp;
        }
        void imprimir(){
            cout << "\nnombre: " << nombre << "\n";
            cout << "edad: " << edad << "\n";
            cout << "id: " << id << "\n";
        }
};


class MyClass2{
    public:
        string nombre;
        int edad;
        MyClass2(string nombrep, int edadp);
        void imprimir();
};

MyClass2::MyClass2(string nombrep, int edadp){  //declaramos el constructor afuera de la clase
    nombre = nombrep;
    edad = edadp;            
}

void MyClass2::imprimir(){           //declaramos una funcion afuera tambien porque si
    cout << "\nnombre: " << nombre << "\n";
        cout << "edad: " << edad << "\n";
}


int main(){
    MyClass objeto1("Matias", 30, 36988506);
    objeto1.imprimir();

    MyClass2 objeto2("Gabriel", 30);
    objeto2.imprimir();

    return 0;
}