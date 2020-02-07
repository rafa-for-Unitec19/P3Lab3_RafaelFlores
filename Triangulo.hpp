#ifndef TRIANGULO_H
#define TRIANGULO_H
class Triangulo{
	private: 
		float lado1, lado2, lado3, altura, area;
	public:
		Triangulo(float l1, float l2, float l3);
		void setAltura();
		float getLado1()const {return lado1;};
		float getLado2()const {return lado2;};
		float getLado3()const {return lado3;};
		float getAltura()const {return altura;};
		float getArea();
};
#endif
