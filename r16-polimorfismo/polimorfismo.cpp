#include <iostream>
#include <vector>
#include <cmath>

class Figura {
public:
    virtual double area() const = 0;
    virtual std::string nombre() const = 0;
    virtual ~Figura() {}
};

class Circulo : public Figura {
public:
    Circulo(double radio) {
        this->radio = radio;
    }
    double area() const override {
        return 3.14159 * radio * radio;
    }
    std::string nombre() const override {
        return "Circulo";
    }
private:
    double radio;
};

class Rectangulo : public Figura {
public:
    Rectangulo(double base, double altura) {
        this->base = base;
        this->altura = altura;
    }
    double area() const override {
        return base * altura;
    }
    std::string nombre() const override {
        return "Rectangulo";
    }
private:
    double base, altura;
};

int main() {
    std::vector<Figura*> figs;
    figs.push_back(new Circulo(1.0));
    figs.push_back(new Rectangulo(3.0, 4.0));

    double total = 0;
    for (Figura* f : figs) {
        std::cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }
    std::cout << "total: " << total << '\n';

    for (Figura* f : figs) {
        delete f;
    }

    return 0;
}