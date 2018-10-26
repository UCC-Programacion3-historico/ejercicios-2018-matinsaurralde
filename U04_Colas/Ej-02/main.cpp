#include <iostream>
#include "../Cola/Cola.h"
#include "/Users/matiasinsauarralde/Google Drive/UCC/Programacion3/Github/ejercicios-2018-matinsaurralde/U03_Pilas/Pila/Pila.h"
#include <string>
using namespace std;

int main() {

string palabra;
   // cout<<"ingrese frase"<<endl;
   // cin>>palabra;
palabra="rayar";

    Pila<char> *pila=new Pila<char>();
    ColaPrioridades<char> cola;

    cout<<palabra<<endl;

    int largo=palabra.length();

    for(int i=0; i<=largo;i++){
        pila->push(palabra[i]);
        cola.encolar(palabra[i]);
    }

int flag=1;

   for (int i = 1; i<=largo;i++){
       if (pila->pop()!=cola.desencolar())
           flag=0;
   }

    if (flag==0)
        cout<<"son dinstintas"<<endl;
    else cout<<"son iguales"<<endl;
    return 0;
}