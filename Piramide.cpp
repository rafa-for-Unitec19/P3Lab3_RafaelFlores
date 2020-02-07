#include "Piramide.hpp"
#include <iostream>
#include <cmath>

using namespace std;

float Piramide::getVolumen(){
        volumen = (pow((base.getLado2() * 4), 2) * altura)/3;
        return volumen;
}

Piramide::Piramide(Triangulo r, float a): base(r), altura(a){}


