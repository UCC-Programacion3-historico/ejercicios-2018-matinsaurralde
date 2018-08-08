#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {


    calculadora <int, long> micalc;
    calculadora <double,long> micalcDouble;
    cout << "Ejercicio 00/02\n" << endl;
    cout << micalc.sumar(2,2)<< endl;
    cout << micalc.restar(2,3)<< endl;
    cout << micalc.multiplicar(3,2)<< endl;
    cout << micalc.dividir(6,2)<< endl;

    try {
        cout << micalc.dividir(4,0) << endl;
    }catch (int e) {
        cout<< "error: "<< e << endl;
    }



    cout << micalcDouble.sumar(2,2)<< endl;
    cout << micalcDouble.restar(2,3)<< endl;
    cout << micalcDouble.multiplicar(3,2)<< endl;
    cout << micalcDouble.dividir(6,5)<< endl;

    return 0;
}