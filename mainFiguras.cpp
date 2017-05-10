#include "figura.h"
#include "rectangulo.h"
#include <iostream>
using namespace std;

int main(){
    Figura figura;
    Rectangulo rectangulo(10,20);
    
    cout<<"Area Figura: "<<figura.area()<<endl<<"Area Rectangulo: "<<rectangulo.area()<<endl;
    return 0;
}
