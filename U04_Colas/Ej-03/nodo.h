
#ifndef PROGRAMACION3_NODO2_H
#define PROGRAMACION3_NODO2_H

template<class T>
class Nodo {
private:
    T dato;
    Nodo *next;
    int prioridad;
public:
    Nodo(T d, int p) {
        dato = d;
        next = nullptr;
        prioridad = p;
    }

    Nodo(T d, Nodo *n, int p) {
        dato = d;
        next = n;
        prioridad = p;
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