#include <iostream>
#include <string>

int maximo(const int v[], int n) { // C
    int mejor = v[0];              // corregido: inicializar con el primer elemento
    for (int i = 1; i < n; i++)    // corregido: empieza en 1, ya usamos v[0]
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main() {
    int v[] = {3, 7, 2, 9, 4};
    std::cout << maximo(v, 5) << '\n';
    return 0;
}