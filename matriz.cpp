#include "circulo.h"
#include <iostream>
using namespace std;

void imprimirMatriz(Circulo***, int);

int main(){
    Circulo*** matriz;
    int size=3;
    //crear matriz

    //crear primera dimension 
    matriz = new Circulo**[size];

    //instanciar filas de arreglos a ciculos
    for(int i=0;i<size;i++){
        matriz[i]= new Circulo*[size];

    }

    //instanciar elementos de la matriz(circulo)
    for(int i=0;i<size;i++){
        for(int j=0; j<size;j++){
            matriz[i][j] = new Circulo(i*j);
        }
    }
    imprimirMatriz(matriz,size);

    //liberar memoria
    //liberar elementos de la matriz(circulo)
    for(int i =0;i<size;i++){
        for(int j = 0;j<size;j++){
            delete matriz[i][j];
            matriz[i][j] = NULL;
        }
    }
    //liberar filas de arreglos de apuntadores a circulo
    for(int i = 0; i < size; i++){
        delete[] matriz[i] ;
        matriz[i]=NULL;
    }

    //liberar primera dimension
    delete[] matriz;
    matriz = NULL;
    //ejemplo del dynamic cast
    Figura* figura= new Circulo(10);
    Circulo* circulo = dynamic_cast<Circulo*>(figura);
    if(circulo!=NULL){
        cout<<"El area del circulo casteado es: "<<circulo->area()<<endl;
        delete figura;
    }


    return 0;
} 

void imprimirMatriz(Circulo*** matrix,int size){
    for(int i =0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"("<<matrix[i][j]->area()<<") ";
        }
        cout<<endl;
    }

}
