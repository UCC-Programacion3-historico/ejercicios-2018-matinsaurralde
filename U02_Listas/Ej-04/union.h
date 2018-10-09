#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> *lisA, Lista<T> *lisB) {

    Lista<T> *temp = new Lista<T>();

for (int i = 0;i<=lisA->getTamanio()-1;i++){
    temp->insertarUltimo(lisA->getDato(i));
}

    for (int i = 0;i<=lisB->getTamanio()-1;i++){
        temp->insertarUltimo(lisB->getDato(i));
    }

    return temp;
}


#endif //UNION_H
