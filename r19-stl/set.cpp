#include <iostream>
#include <set>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> palabras = {"hola", "mundo", "hola", "mundo", "adios"};
    std::set<std::string> distintas;

    for (int i = 0; i < palabras.size(); i++) {
        distintas.insert(palabras[i]);
    }

    std::cout << "Palabras distintas: " << distintas.size() << '\n';

    return 0;
}