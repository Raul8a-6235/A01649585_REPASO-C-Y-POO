#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> palabras = {"hola", "mundo", "hola", "mundo", "adios"};
    std::vector<std::string> claves;
    std::vector<int> conteos;

    for (int i = 0; i < palabras.size(); i++) {
        bool encontrada = false;
        for (int j = 0; j < claves.size(); j++) {
            if (claves[j] == palabras[i]) {
                conteos[j] = conteos[j] + 1;
                encontrada = true;
                break;
            }
        }
        if (encontrada == false) {
            claves.push_back(palabras[i]);
            conteos.push_back(1);
        }
    }

    for (int i = 0; i < claves.size(); i++) {
        std::cout << claves[i] << ": " << conteos[i] << '\n';
    }

    return 0;
}