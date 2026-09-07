#ifndef ARREGLO_H
#define ARREGLO_H

class Arreglo {
private:
    int* datos;
    int tam;

public:
    Arreglo(int n) {
        tam = n;
        datos = new int[tam];
    }
    ~Arreglo() {
        delete[] datos;
    }
    Arreglo(const Arreglo& otro) {
        tam = otro.tam;
        datos = new int[tam];
        for (int i = 0; i < tam; i++) datos[i] = otro.datos[i];
    }
    Arreglo& operator=(const Arreglo& otro) {
        delete[] datos;
        tam = otro.tam;
        datos = new int[tam];
        for (int i = 0; i < tam; i++) datos[i] = otro.datos[i];
        return *this;
    }
};

#endif