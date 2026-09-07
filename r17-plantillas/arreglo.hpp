#ifndef ARREGLO_HPP
#define ARREGLO_HPP

template <typename T>
class Arreglo {
public:
    Arreglo(int n) {
        tam = n;
        datos = new T[tam];
    }

    Arreglo(const Arreglo<T>& otro) {
        tam = otro.tam;
        datos = new T[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = otro.datos[i];
        }
    }

    Arreglo<T>& operator=(const Arreglo<T>& otro) {
        if (this == &otro) return *this;
        delete[] datos;
        tam = otro.tam;
        datos = new T[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = otro.datos[i];
        }
        return *this;
    }

    ~Arreglo() {
        delete[] datos;
    }

    T& operator[](int i) {
        return datos[i];
    }

private:
    T* datos;
    int tam;
};
#endif