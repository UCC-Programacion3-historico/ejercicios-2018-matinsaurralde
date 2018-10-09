#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() { //hay que agregar funcion para que de los opuestos de los simbolos sin nombre

    Pila<char> pila;
    string operacion;

    cout<<"ingrese operacion"<<endl;
    cin>>operacion;

    for (int i = 0; i<operacion.length(); i++){

        if (operacion[i]=='{'||operacion[i]=='['||operacion[i]=='(')
        pila.push(operacion[i]);

        if (operacion[i]==')'||operacion[i]==']'||operacion[i]=='}'){
            switch (operacion[i]){
                case ')': {
                    if (pila.peek()!='('){
                        cout<<"Los signos estan mal"<<endl;
                        break;
                    } else{
                        pila.pop();
                    }
                }
                case ']': {
                    if (pila.peek()!='['){
                        cout<<"Los signos estan mal"<<endl;
                        break;
                    } else{
                        pila.pop();
                    }
                }
                case '}': {
                    if (pila.peek()!='{'){
                        cout<<"Los signos estan mal"<<endl;
                        break;
                    } else{
                        pila.pop();
                    }
                }
            }
        }
    }

    return 0;
}