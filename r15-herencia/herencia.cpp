#include <iostream>
#include <string>

class Persona {
public:
    Persona(std::string nombre) {
        this->nombre = nombre;
        std::cout << "Persona(" << nombre << ")\n";
    }
    ~Persona() {
        std::cout << "~Persona(" << nombre << ")\n";
    }
protected:
    std::string nombre;
};

class Empleado : public Persona {
public:
    Empleado(std::string nombre, int salario) : Persona(nombre) {
        this->salario = salario;
        std::cout << "Empleado(" << nombre << ")\n";
    }
    ~Empleado() {
        std::cout << "~Empleado(" << nombre << ")\n";
    }
protected:
    int salario;
};

class Gerente : public Empleado {
public:
    Gerente(std::string nombre, int salario, int personas) : Empleado(nombre, salario) {
        this->personas = personas;
        std::cout << "Gerente(" << nombre << ")\n";
    }
    ~Gerente() {
        std::cout << "~Gerente(" << nombre << ")\n";
    }
private:
    int personas;
};

int main() {
    { Gerente g("Ana", 1000, 5); }
    return 0;
}