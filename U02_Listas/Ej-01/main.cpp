#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;

    Lista<int> *lista= new Lista<int>();


    for (int i=0; i<=5; i++){
        lista->insertarPrimero(i);
    }


    fnInvierte(lista);   //NO SE COMO ANDA



    for (int i=0; i<=5; i++){
        cout<<lista->getDato(i)<<endl;
    }


    return 0;
}