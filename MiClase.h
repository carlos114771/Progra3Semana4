#include <iostream>

#ifndef MIClaSE_H
#define MICLASE_H

class MiClase {
    private:
        int* pointer;
        int size;
    
    public:
        MiClase();
        MiClase(int);

        int get(int);
        void set(int, int);
    ~MiClase();

};


#endif
