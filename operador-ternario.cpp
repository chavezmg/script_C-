#include <iostream>
using namespace std;

int main(){

    int x = 5;
    int y = 9;
    int num = (x<y) ? x : y;    //si x es menor que y, asignar x, si no y
    cout << num;

    return 0 ;
}