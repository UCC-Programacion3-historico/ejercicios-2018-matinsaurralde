#include "Geometria.h"

float Geometria::getAlto() const {
    return alto;
}

float Geometria::getAncho() const {
    return ancho;
}

void Geometria::setAlto(float alto) {
    Geometria::alto = alto;
}

void Geometria::setAncho(float ancho) {
    Geometria::ancho = ancho;
}
