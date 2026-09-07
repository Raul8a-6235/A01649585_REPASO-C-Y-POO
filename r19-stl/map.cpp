#include <iostream>
#include <map>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> palabras = {"hola", "mundo", "hola", "mundo", "adios"};
    std::map<std::string, int> conteo;

    for (int i = 0; i < palabras.size(); i++) {
        conteo[palabras[i]] = conteo[palabras[i]] + 1;
    }

    for (auto par : conteo) {
        std::cout << par.first << ": " << par.second << '\n';
    }

    return 0;
}