#include "Circulo.hpp"
#include <cmath>

float Circulo::getArea(){
        area = pi * pow(radio, 2);
        return area;
}

void Circulo::setCircunferencia(){
	circunferencia = pi * getDiametro();
}

void Circulo::setDiametro(){
        diametro = radio * 2;
}

Circulo::Circulo(float r): radio(r){
        setDiametro();
	setCircunferencia();
}

