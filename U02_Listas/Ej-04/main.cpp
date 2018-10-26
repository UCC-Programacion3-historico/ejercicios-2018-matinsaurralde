#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"

using namespace std;
int main() {
    std::cout << "Ejercicio 01/04\n" << std::endl;

    Lista<int> *lisA=new Lista<int>();
    Lista<int> *lisB=new Lista<int>();

    Lista <int> *temp=new Lista<int>();

    for (int i=0;i<=3;i++){
        lisA->insertarPrimero(i); //lleno la lista A
    }

    cout<<"lis a:"<<endl;
    for (int i=0;i<=3;i++){
        cout << lisA->getDato(i); //muestro A
    }


    for (int i=0;i<=3;i++){
        lisB->insertarPrimero(i);// lleno la lista B
    }

    cout<<endl<<"lis b:"<<endl;
    for (int i=0;i<=3;i++){
        cout << lisB->getDato(i); // muestro B
    }

temp = unir(lisB,lisA);

    cout<<endl<<"lis temp:"<<endl;
    for (int i=0;i<=temp->getTamanio()-1;i++){
        cout << temp->getDato(i);
    }

    return 0;
}