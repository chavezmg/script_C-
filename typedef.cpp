#include <iostream>
#include <vector>
using namespace std;

typedef vector<pair<string, int >> pairlist_t;// pairlist_t es el nombre que le asignamos
//a ese nombre raro
typedef string text_t; //aqui le dimos text_t de nombre
typedef int num_t; //aqui num_t corresponde a un int

using text_t = string; //esto hace lo mismo que lo
using num_t = int;     //anterior

int main(){
    pairlist_t pairlist;
    text_t firstname = "Bro";
    num_t age = 29;

    cout << firstname << "\n";
    cout << age << "\n";

    return 0;
}