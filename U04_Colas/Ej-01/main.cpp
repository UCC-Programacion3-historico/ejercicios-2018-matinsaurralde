#include <iostream>
#include "../Cola/Cola.h"
#include "/Users/matiasinsauarralde/Google Drive/UCC/Programacion3/Github/ejercicios-2018-matinsaurralde/U03_Pilas/Pila/Pila.h"
using namespace std;


bool igualdad(ColaPrioridades <int> cA,ColaPrioridades <int> cB){
    if(cA.esVacia()&&cB.esVacia())
        return true;

        if(cA.desencolar()==cB.desencolar())
            return igualdad(cA,cB);
        else
            return false;



}


int main() {
Pila<int> pil;
    pil.push(9);
    if(!pil.esVacia())
        cout<<"funcooo"<<endl;


        std::cout << "Ejercicio 04/01\n" << std::endl;
        ColaPrioridades<int> a;
        ColaPrioridades<int> b;
        for (int i=0;i<10;i++){
            a.encolar(i+1);
            b.encolar(i);
        }
        cout<<igualdad(a,b);
        return 0;
  //  ColaPrioridades <char> c1;
  //  ColaPrioridades <char> c2;
  //
  //
  //  c2.encolar('h');
  //  c2.encolar('o');
  //  c2.encolar('l');
  //  c2.encolar('a');
  //
  //  c1.encolar('h');
  //  c1.encolar('o');
  //  c1.encolar('l');
  //  c1.encolar('a');
  //
  //  if (igualdad(c1,c2)==1)
  //      cout<<"son iguales. "<<endl;
  //  else cout<<"no son iguales"<<endl;
  //
  //
  //  return 0;
}