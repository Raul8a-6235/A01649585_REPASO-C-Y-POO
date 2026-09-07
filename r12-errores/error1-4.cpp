#include <string>

class Cuenta {
public:
    void depositar(double monto); // no tiene cuerpo, esto va a fallar al enlazar
};

class Foo {
    int x;
} // aqui falta el punto y coma

void procesar(int n) {}

int main() {
    int origen;

    std::vector<int> v; // esto no deberia compilar, falta el include

    std::string s = "hola";
    procesar(s); // esto tampoco, se espera int no string

    Cuenta c;
    c.depositar(100.0); // este si compila pero falla despues al enlazar

    return 0;
}