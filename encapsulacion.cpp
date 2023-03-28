#include <iostream>
using namespace std;
//encapsulacion significa ocultar data sensible al usuario, para esto declaramos
//esa data bajo especificador de acceso tipo "private", y para cambiar o consultar
//un valor debe hacerse mediante metodos

class Myclass{
    public:
        string nombre;
        Myclass(string nombrep){
            nombre = nombrep;
        }
        void cargarDatos(int edadp, int dnip, int saldop){
            edad = edadp;
            dni = dnip;
            saldo = saldop;
        }
        void consultarDatos(){
            cout <<  "\n*******Datos de cliente******\n ";
            cout << nombre << ", " << edad << ", " << dni << ", " << saldo;
            cout <<  "\n*****************************\n ";
        }
    private:
        int edad;
        int dni;
        int saldo;
};

class Myclass2{
    public:
        void setSalary(int salaryp){    //setter
            salary = salaryp;
        }
        int getSalary(){    //getter
            cout << "Salario: " <<salary;
            return salary;
        }
    private:
        int salary;
};

int main(){
    Myclass objeto1("Matias");
    objeto1.cargarDatos(30, 36988506, 5000);
    objeto1.consultarDatos();

    Myclass2 objeto2;
    objeto2.setSalary(15000);
    objeto2.getSalary();
    return 0;
}