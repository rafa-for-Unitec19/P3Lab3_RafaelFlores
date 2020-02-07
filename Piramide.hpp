#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include "Triangulo.hpp"

class Piramide{
        private: 
                float altura, volumen;
		Triangulo base;
        public:
                Piramide(Triangulo t, float altura);
                float getAltura()const {return altura;};
                float getVolumen();
};
#endif

