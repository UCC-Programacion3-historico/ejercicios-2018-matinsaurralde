#include <iostream>
#include "../Pila/Pila.h"
using namespace std;

int main() {
    int flag = 1;
    Pila<int> pila1;
    Pila<int> pila2;

    for (int i = 5 ; i >= 0 ; i--){
        pila1.push(i);
    }

    for (int i =0 ; i <= 5 ; i++){
        pila2.push(i);
    }

    do{

    if (pila1.pop() != pila2.pop()){
        flag=0;
        cout<<"NO SON IGUALES"<<endl;
    }

    if (pila1.esVacia()&&pila2.esVacia()){
        flag=0;
        cout<<"SI SON IGUALES"<<endl;
    }
    }while(flag==1);


    return 0;
}