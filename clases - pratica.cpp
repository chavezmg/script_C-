#include <iostream>

using namespace std;
#define TAM 4
int main(){

 char a[TAM] = {2, 5, 7, 9};
char *ptrA;

ptrA = &a[0];
ptrA = ptrA + 1; /* ptrA += 1 */

printf(" %d\n", *(ptrA + 2));
    return 0;
}