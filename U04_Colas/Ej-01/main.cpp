#include <iostream>
#include "../Cola/Cola.h"

int main() {

    Cola <char> c1;
    Cola <char> c2;

    c1.encolar(´h´);
    c1.encolar(´o´);
    c1.encolar(´l´);
    c1.encolar(´a´);

    c2.encolar(´h´);
    c2.encolar(´o´);
    c2.encolar(´l´);
    c2.encolar(´a´);



   while( c1.desencolar())


    std::cout << "Ejercicio 04/01\n" << std::endl;
    return 0;
}