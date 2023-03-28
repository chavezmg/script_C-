#include <iostream>
using namespace std;
//con herencia hacemos que una clase hijo herede atributos y metodos de otra clase padre
//en este ejemplo vamos a hacer herencia multiple
class mama{
    public:
        string nombre;
        int edad;
        mama(string nombrep, int edadp){
            nombre = nombrep;
            edad = edadp;
            cout << "\nConstructor mama" << endl;
        }
};

class papa{
    public:
        int altura;
        int peso;
        papa(int alturap, int pesop){
            altura = alturap;
            peso = pesop;
            cout << "\nConstructor papa" << endl;
        }
};

class hijo : public mama, public papa{
    public:
        int calzado;
        hijo(string name, int altura, int peso, int edad, int talla) : mama(name, edad), papa(peso, altura){//acá heredamos los dos constructores padres
            calzado = talla;
            cout << "\nConstructor hijo" << endl;
        }
        void mostrarDatos(){
                cout << nombre << ", " << edad << " anos, " << altura << "cm, ";
                cout << peso << "kg"<< ", talle: " << calzado << endl;
            }
};

int main(){
    hijo hijo1("Matias", 30, 180, 85, 45);
    hijo1.mostrarDatos();
    return 0;
}