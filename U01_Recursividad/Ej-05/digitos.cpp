#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int resto(unsigned int a, unsigned int b) {
    if (a<b)
        return a;

    return resto( a-b, b);
}



unsigned int cociente(unsigned int a, unsigned int b) {
  if (a<b)
      return 0;


  return 1 + cociente(a-b,b);

}




void escribir_espaciado(unsigned int num) {

    if (num<10)
        cout << num;



}
