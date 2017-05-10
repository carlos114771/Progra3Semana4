#include "figura.h"
#ifndef cilculo_h
#define circulo_h
#define PI 3.14159265
class Circulo:public Figura(){
    private:
        double radio;
    public:
        Circulo();
        Circulo(double);

        void setRadio(double);
        double getRadio();

        double area();
        double perimetro();


};

#endif
