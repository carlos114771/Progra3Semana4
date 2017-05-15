
#include "circulo.h" 
#define PI 3.14159265
Circulo::Circulo(){
    radio=5;
}

Circulo::Circulo(double radio){
    this->radio=radio;
}

void Circulo::setRadio(double r){
    radio=r;
}

double Circulo::getRadio(){
    return radio;
}

double Circulo::area(){
    return radio*radio*PI;
}

double Circulo::perimetro(){
    return 2*PI*radio;
}
