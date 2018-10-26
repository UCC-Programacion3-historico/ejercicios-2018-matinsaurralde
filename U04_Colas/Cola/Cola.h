#ifndef COLA_H
#define COLA_H
#include "/Users/matiasinsauarralde/Google Drive/UCC/Programacion3/Github/ejercicios-2018-matinsaurralde/U04_Colas/Cola/nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class ColaPrioridades {
private:
    nodo<T> *entrada;
    nodo<T> *salida;
public:
    ColaPrioridades();

    ~ColaPrioridades();

    void encolar(T dato);

    T desencolar();

    bool esVacia();
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
ColaPrioridades<T>::ColaPrioridades() {
    entrada = nullptr;
    salida = nullptr;
}


/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
ColaPrioridades<T>::~ColaPrioridades() {}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void ColaPrioridades<T>::encolar(T dato) {
    auto *nuevo = new nodo<T>(dato, nullptr); //hago un nuevo nodo con el dato que apunte a null prque va al ultimo
    if(entrada != nullptr)
        entrada->setNext(nuevo); // entrada apunta al nodo nuevo
    else
        salida = nuevo;
    entrada = nuevo; // nuevo ahora es entrada
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T ColaPrioridades<T>::desencolar() {
    if(salida == nullptr)
        throw 1;

    T data = salida->getDato();
    nodo<T> *salida_anterior = salida;
    salida = salida->getNext();
    //si cuando actualizo salida, este se hace nulo, la entrada tambien.(cola vacia)
    if(salida == nullptr)
        entrada = nullptr;

    return data;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool ColaPrioridades<T>::esVacia() {
    return salida == nullptr;
}

#endif //LISTA_H