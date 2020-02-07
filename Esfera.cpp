#include "Esfera.hpp"
#include <iostream>
#include <cmath>

using namespace std;

float Esfera::getVolumen(){
        volumen = (4 * circulo.getPi() * (pow(getRadio(), 3))) / 3;
        return volumen;
}

Esfera::Esfera(Circulo c): circulo(c){}

