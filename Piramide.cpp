#include "Piramide.hpp"
#include <iostream>
#include <cmath>

using namespace std;

float Piramide::getVolumen(){
        area = ((base.getLado2() * 4) * altura)/3);
        return area;
}

Piramide::Circulo(Tringulo r, float a): base(r), altura(a){
        setDiametro();
        setCircunferencia();
}

