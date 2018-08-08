#include "Triangulo.h"


void Triangulo::setAngulo(float angulo) {
    Angulo=angulo;
}

float Triangulo::getAngulo() {
    return Angulo;
}

float Triangulo::getSuperficie(){
    return (alto*ancho)/2;
}

float Triangulo::getPerimetro() {
    return (alto+ancho);
}