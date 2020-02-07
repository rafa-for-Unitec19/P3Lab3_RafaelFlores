#include "Triangulo.hpp"
#include <iostream>
#include <cmath>

using namespace std;

float Triangulo::getArea(){
	float s = (getLado1() + getLado2() + getLado3()) / 2;
	area = sqrt(s * (s - getLado1()) * (s - getLado2()) * (s - getLado3()));
	cout << "EL area del triangulo es: " << area << endl;
	return area;
}

void Triangulo::setAltura(){
	altura = (2 * getArea()) / getLado2();
}

Triangulo::Triangulo(float l1, float l2, float l3): lado1(l1), lado2(l2), lado3(l3){
	setAltura();
}
