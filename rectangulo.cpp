#include "rectangulo.h"
//using namespace std;
Rectangulo::Rectangulo(){
    lado=altura=5;
}

Rectangulo::Rectangulo(double lado,double altura){
    this->lado=lado;
    this->altura=altura;

}

double Rectangulo::area(){
    return lado*altura;
}

double Rectangulo::perimetro(){
    return 2*lado+2*altura;
}

double Rectangulo::getLado(){
    return lado;
}

double Rectangulo::getAltura(){
    return altura;
}

void Rectangulo::setLado(double pLado){
    lado=pLado;
}

void Rectangulo::setAltura(double pAltura){
    altura=pAltura;
}
