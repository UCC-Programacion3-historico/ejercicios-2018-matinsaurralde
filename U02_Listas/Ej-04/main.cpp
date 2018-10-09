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
        lisA->insertarPrimero(i);
    }

    cout<<"lis a:"<<endl;
    for (int i=0;i<=3;i++){
        cout << lisA->getDato(i);
    }


    for (int i=0;i<=3;i++){
        lisB->insertarPrimero(i);
    }

    cout<<endl<<"lis b:"<<endl;
    for (int i=0;i<=3;i++){
        cout << lisB->getDato(i);
    }

temp = unir(lisB,lisA);
    cout<<endl<< temp->getTamanio()<<endl; // para verificar

    cout<<endl<<"lis temp:"<<endl;
    for (int i=0;i<=7;i++){
        cout << temp->getDato(i);
    }

    return 0;
}