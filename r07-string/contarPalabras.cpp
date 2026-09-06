#include <iostream>
#include <string>

int contarPalabras(const std::string& s) {
    int contador = 0;
    bool dentro = false;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            dentro = false;
        } else if (dentro == false) {
            contador = contador + 1;
            dentro = true;
        }
    }
    return contador;
}

std::string voltear(const std::string& s) {
    std::string r = "";
    size_t i = s.size();
    while (i > 0) {
        i = i - 1;
        r += s[i];
    }
    return r;
}

int main() {
    std::string texto = "hola   mundo";
    std::cout << "Palabras: " << contarPalabras(texto) << '\n';
    std::cout << "Volteado: " << voltear(texto) << '\n';
    return 0;
}