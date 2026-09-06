#include <iostream>
#include <string>

int pares(const int v[], int n) { // B
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 == 0) c++;   // corregido: == 0 para pares, no != 0
    return c;
}

int main() {
    int v[] = {1, 2, 3, 4, 5, 6};
    std::cout << pares(v, 6) << '\n';  
    return 0;
}