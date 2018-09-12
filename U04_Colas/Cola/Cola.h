#ifndef COLA_H
#define COLA_H

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */

#include "Nodo.h"
template<class T>
class Cola {
private:
    Nodo<T> *entrada ;
    Nodo<T> *salida ;
public:
    Cola();

    ~Cola();

    void encolar(T dato);

    T desencolar();

    bool esVacia();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>

Cola<T>::Cola() {
    entrada= nullptr ;
    salida= nullptr ;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {
    auto *nuevo= new Nodo<T>(dato, nullptr) ;
    if (entrada!= nullptr)              // entra nuevo y cambia el entrada
        entrada->setNext(nuevo) ;
    else
        entrada = nuevo ;   // El Nodo que se inserte tenga el nombre de entrada y salida
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    if (salida == nullptr)
        throw 1 ;
    T dato = salida->getDato() ;
    Nodo<T> *salida_anterior = salida ;
    salida = salida->getNext() ;

    if (salida == nullptr)
        entrada = nullptr ;

    delete salida_anterior ; // Borra Nodo y devuelve el dato del anterior (el borrado
    return dato ;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return salida == nullptr ;
}

#endif //LISTA_H