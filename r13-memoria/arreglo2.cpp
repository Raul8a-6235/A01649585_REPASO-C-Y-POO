#include <iostream>
#include <string>

class Arreglo {
public:
    Arreglo(int n) {
        tam = n;
        datos = new int[tam];
    }

    Arreglo(const Arreglo& otro) {
        tam = otro.tam;
        datos = new int[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = otro.datos[i];
        }
    }

    Arreglo& operator=(const Arreglo& otro) {
        if (this == &otro) return *this;
        delete[] datos;
        tam = otro.tam;
        datos = new int[tam];
        for (int i = 0; i < tam; i++) {
            datos[i] = otro.datos[i];
        }
        return *this;
    }

    ~Arreglo() {
        delete[] datos;
    }

    void set(int i, int valor) {
        datos[i] = valor;
    }

    int get(int i) {
        return datos[i];
    }

private:
    int* datos;
    int tam;
};

int main() {
    Arreglo a(5);
    a.set(0, 10);

    Arreglo b = a;
    b.set(0, 99);

    std::cout << a.get(0) << '\n';

    return 0;
}