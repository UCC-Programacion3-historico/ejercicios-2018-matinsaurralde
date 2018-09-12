//
// Created by alumno on 29/08/18.
//

#ifndef PROGRAMACION3_nodo_H
#define PROGRAMACION3_nodo_H

template <class T>

class Nodo {
    
private:
    
    T dato;
    
    Nodo *next;
    
public:

    Nodo (T d){
     dato=d;
     next= nullptr;

    }

    Nodo


    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        Nodo::dato = dato;
    }

    Nodo *getNext() const {
        return next;
    }

    void setNext(Nodo *next) {
        Nodo::next = next;
    }
    
};



#endif //PROGRAMACION3_nodo_H
