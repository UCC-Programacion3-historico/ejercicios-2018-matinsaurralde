//
// Created by martin on 29/08/18.
//
#ifndef PROGRAMACION3_NODO_H
#define PROGRAMACION3_NODO_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo *next;
public:
    Nodo(T d) {
        dato = d;
        next = nullptr;
    }
    Nodo(T d, Nodo *n) {
        dato = d;
        next = n;
    }

    T getDato() {
        return dato;
    }

    /**
     *
     * @param d
     */
    void setDato(T d) {
        dato = d;
    }

    Nodo *getNext() {
        return next;
    }

    void setNext(Nodo *n) {
        next = n;
    }
};


#endif //PROGRAMACION3_NODO_H