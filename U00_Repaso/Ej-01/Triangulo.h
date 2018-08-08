#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H

#include "Geometria.h"

class Triangulo : public Geometria {

protected:

    float Angulo;

public:

void setAngulo(float angulo);
float getAngulo();

float getPerimetro();
float getSuperficie();
};


#endif //REPASO_TRIANGULO_H
