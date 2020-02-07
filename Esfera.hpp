#ifndef ESFERA_H
#define ESFERA_H
#include "Circulo.h"
class Esfera{
        private: 
                Circulo circulo;
        private:
                Esfera(Circulo c);
                void setAltura();
                float getRadio()const {return circulo.getRadio():};
                float getVolumen();
}
#endif

