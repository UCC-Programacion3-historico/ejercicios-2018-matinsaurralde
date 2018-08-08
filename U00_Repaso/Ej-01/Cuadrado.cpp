#include "Cuadrado.h"
#include "math.h"

float Cuadrado::getDiagonal() {
    return (sqrt( ((alto*alto) + (ancho*ancho) )));
}

float  Cuadrado::getSuperficie() {
    return alto*ancho;
}

float Cuadrado::getPerimetro() {
    return ((2*alto)(2*ancho));
}