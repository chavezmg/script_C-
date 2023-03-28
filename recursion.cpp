#include <iostream>
using namespace std;

int factorial(int x){
    if (x == 1){
        return x;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){

    int result = factorial(5);
    cout << result;
    return 0;
}