#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {

    Pila<int> pila1;


    for (int i = 0 ; i <= 5 ; i++){
        pila1.push(i);
    }
cout<<pila1.peek()<<endl;

    return 0;
}