#ifndef CIRCULO_H
#define CIRCULO_H
class Circulo{
        private: 
                float radio, diametro, circunferencia, area;
		const float pi = 3.14159265359;
        public:
                Circulo(float r);
		~Circulo();
		void setDiametro();
		void setCircunferencia();
                float getRadio() const {return radio;};
                float getDiametro() const {return diametro;};
                float getCircunferencia() const {return circunferencia;};
		float getArea();
		float getPi() const {return pi;};
};
#endif

