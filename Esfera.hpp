#ifndef ESFERA_H
#define ESFERA_H
#include "Circulo.hpp"
class Esfera{
        private: 
                Circulo circulo;
		float volumen;
        public:
                Esfera(Circulo c);
                float getRadio() const {return circulo.getRadio();};
                float getVolumen();
};
#endif

