#include "Piramide.hpp"
#include <cmath>

Piramide::~Piramide(){}

float Piramide::getVolumen(){
        volumen = (pow((base.getLado2()), 2) * altura)/3;
        return volumen;
}

Piramide::Piramide(Triangulo r, float a): base(r), altura(a){}


