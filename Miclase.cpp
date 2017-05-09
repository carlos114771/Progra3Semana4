#include "MiClase.h"
#include <iostream>

using namespace std;

MiClase::MiClase(){
    pointer = new int[10];
    size = 10;
}

MiClase::MiClase(int pSize){
    this->size = pSize;
    pointer = new int[size];
    
}

int MiClase::get(int pos){
    if(pos<0||pos>size-1){
        return -1;
    }else{
        return pointer[pos];
    }

}

void MiClase::set(int pos, int val){
    if(pos >= 0 && pos <= size - 1){
        pointer[pos]=val;
    }
}

MiClase::~MiClase(){
    delete[] pointer;
    cout<<"La memoria ha sido liberado"<<endl;

}
