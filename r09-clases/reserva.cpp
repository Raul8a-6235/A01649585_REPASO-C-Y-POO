#include <iostream>
#include <string>

class Reserva {
private:
    std::string sala = "A1";
    int personas = 1;
    int horaInicio = 8, horaFin = 9;

public:
    bool asignarSala(std::string s) {
        if (s.empty()) return false;
        sala = s;
        return true;
    }

    bool asignarPersonas(int p) {
        if (p < 1 || p > 20) return false;
        personas = p;
        return true;
    }

    bool asignarHorario(int ini, int fin) {
        if (ini < 0 || fin > 23 || ini >= fin) return false;
        horaInicio = ini;
        horaFin = fin;
        return true;
    }

    void mostrar() {
        std::cout << sala << ", " << personas << " personas, "
                  << horaInicio << "-" << horaFin << '\n';
    }
};

int main() {
    Reserva r;

    if (!r.asignarSala("Sala B")) std::cout << "sala invalida\n";
    if (!r.asignarPersonas(25)) std::cout << "personas invalidas\n";
    if (!r.asignarHorario(9, 11)) std::cout << "horario invalido\n";

    r.mostrar();

    return 0;
}