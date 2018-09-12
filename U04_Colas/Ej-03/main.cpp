#include <iostream>
#include "../Cola/Cola.h"
#include "ColaPrioridades.h"
using namespace std
int main() {

    ColaPrioridades <int> c;

    for (int i = 10; i<20 ; i++){
        c.encolar(i, 9 -(i-10));
    }
    while (!c.esVacia())
        cout<<c.desencolar()


    std::cout << "Ejercicio 04/03\n" << std::endl;
    return 0;
}