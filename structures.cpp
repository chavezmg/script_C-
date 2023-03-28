#include <iostream>
using namespace std;

struct{
    int numero;
    string name;
}myStruct1, myStruct2, myStruct3;       //creo variables tipo struct

struct mitipodato{  //si le agrego un nombre puedo crear variables con este nombre
    int numero;
    string name;
};

int main(){

    mitipodato miestructura1;
    miestructura1.numero = 100;

    myStruct1.numero = 50;
    myStruct2.name = "Hola";

    cout << myStruct1.numero << "\n";
    cout << myStruct2.name;

    return 0;
}