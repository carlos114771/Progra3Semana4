#include "figura.h"
#ifndef rectangulo_h
#define rectangulo_h
//using namespace std;
class Rectangulo: public Figura{
    private:
        double lado,altura;
    public:
       Rectangulo();
       Rectangulo(double,double);

       double area();
       double perimetro();

       double getLado();
       double getAltura();
       void setLado(double);
       void setAltura(double);
};
#endif 
