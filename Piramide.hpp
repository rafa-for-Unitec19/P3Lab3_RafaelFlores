#ifndef PIRAMIDE_H
#define PIRAMIDE_H
#include "Triangulo.h"
class Piramide{
        private: 
                float altura, volumen;
		Triangulo base;
        private:
                Piramide(Triangulo t, float altura);
                void setAltura();
                float getAltura()const {return lado3;};
                float getVolumen();
}
#endif

