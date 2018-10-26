#include <iostream>
#include "../Cola/Cola.h"
#include "/Users/matiasinsauarralde/Google Drive/UCC/Programacion3/Github/ejercicios-2018-matinsaurralde/U03_Pilas/Pila/Pila.h"

using namespace std;

void invertir(ColaPrioridades<int> &cola){
    Pila<int> *aux= new Pila<int>();

    while(!cola.esVacia()){
    aux->push(cola.desencolar());
    }
    while(!aux->esVacia()){
    cola.encolar(aux->pop());
    }
}

int main() {

    ColaPrioridades<int> cola;

    cola.encolar(1);
    cola.encolar(2);
    cola.encolar(3);
    cola.encolar(4);

    invertir(cola);


    cola.desencolar();
    cola.desencolar();
   cola.desencolar();
    cola.desencolar();

    return 0;
}