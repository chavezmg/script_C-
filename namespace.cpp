#include <iostream>
using namespace std;
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){
//namespace es una entidad, si no especifico que entidad uso
//se utiliza la "local"
//provee una solucion para evitar conflictos de nombres
//cada entidad necesita un nombre unico
//puedo llamar las distintas entidades de esta forma
    cout << first::x << "\n";
    cout << second::x;
//o especificar la que quiero usar asi:
//using namespace first;
//y con simplemente llamar a x se imprime el valor
//bajo esa entidad

    return 0;
}