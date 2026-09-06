#include <iostream>
#include <string>

class Sesion {
public:
    Sesion(std::string n = "sin nombre", int x = 0) : nombre(n) {
        std::cout << "Sesion(" << nombre << ")\n";
    }
    ~Sesion() {
        std::cout << "~Sesion(" << nombre << ")\n";
    }
private:
    std::string nombre;
};

Sesion global("global");

int main() {
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2); }
    std::cout << "--- medio ---\n";
    Sesion d;
    return 0;
}