#include <iostream>
using namespace std;
//cout << insertion operator
//cin << extraction operator
//si estas en vs code
//entrar a file - preferences - code runner
// y chequear la opcion "correr programa en terminal"
int main(){
    string name;
    int age;

    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your age?: ";
    cin >> age;

    cout << "Hello " << name;
    cout << " You are " << age << "Years old "; 

    //si queremos leer un string que tiene espacios 
    //debemos usar otra funcion
    string name2;
    cout << "What is your FULL name?: ";
    getline(cin, name2);
    cout << "Hello " << name;
    cout << " You are " << age << "Years old "; 

    return 0;

}