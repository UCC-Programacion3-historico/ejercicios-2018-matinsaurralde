#include <iostream>
#include "../Pila/Pila.h"

using   namespace std;

int main() {

    string caract;
    Pila<char> *pila = new Pila<char>();
    cout<<"ingrese palabra: "<<endl;

        cin>>caract;
        for (int i= 0; i<caract.length();i++)
        pila->push(caract[i]);


    while (!pila->esVacia()){
        cout<<pila->pop();
    }


    return 0;
}