#include <iostream>
#include "../Lista/Lista.h"
using namespace std;

int main() {
    Lista <int> prueba ;
    prueba.insertarPrimero(5);
    prueba.insertarPrimero(7);
    prueba.insertarPrimero(4);
    prueba.insertarPrimero(3);

    for (int i = 0; i<prueba.getTamanio(); i++){
        cout<<prueba.getDato(i)<<endl;

    }

    prueba.moverPri(3);

cout<< "corrido el primer elemento "<< endl;

    for (int i = 0; i<prueba.getTamanio(); i++){
        cout<<prueba.getDato(i)<<endl;
    }
    return 0;
}