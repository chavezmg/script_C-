#include <iostream>
using namespace std;

int main(){

    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    cout << letters[0][3];
    cout << letters[1][3];
    cout << "\n";

    for(int i=0; i<sizeof(letters)/sizeof(letters[0]); i++){
        for(int j=0; j<sizeof(letters)/sizeof(letters[0][0]); j++){
            cout << letters[i][j] << "\n";
        }
    }
    return 0;
}