#include <iostream>
#include <string>

int suma(const int v[], int n) { //A
    int s = 0;
    for (int i = 0; i < n; i++)  // corregido: i < n, no i <= n
        s += v[i];
    return s;
}

int main() {
    int v[] = {1, 2, 3, 4, 5};
    std::cout << suma(v, 5) << '\n';  
    return 0;
}