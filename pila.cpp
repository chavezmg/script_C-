#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&, int);

int main(){
    Nodo *pila = NULL;
    int n1, n2;
    cout<<"digite un numero: ";
    cin>>n1;
    agregarPila(pila, n1);
    cout<<"digite un numero: ";
    cin>>n2;
    agregarPila(pila, n2);


    getch();
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}