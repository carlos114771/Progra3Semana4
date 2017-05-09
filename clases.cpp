#include "MiClase.h"
#include <iostream>

int main(){
    MiClase myclass(50);
    MiClase* myclass2= new MiClase(20);
    //sintaxis de apuntadores y objetos

    myclass.set(0,100);

    myclass2->set(0,200);
    
    (*myclass2).set(1,300);

    delete myclass2;

    return 0;
}
