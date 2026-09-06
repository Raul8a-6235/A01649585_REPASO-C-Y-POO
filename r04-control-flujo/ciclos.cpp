#include <iostream>
#include <string>

int main(){

    const int N = 5;
int d[N] = {10, 20, 30, 40, 50};

int suma = 0;                            // A: sumar todo -Un arreglo de tamaño 5 tiene índices del 0 al 4, no del 0 al 5. i <= N deja que i llegue a 5, y d[5] ya no existe, es mejor usar i < N.
for (int i = 0; i < N; i++) suma += d[i];

int cuantos = 0;                         // B: contar > 25 -d[0] (que vale 10) nunca se revisa porque el ciclo arranca en i = 1, saltándose el primer elemento del arreglo. Por eso hay que empezar en i = 0.
for (int i = 0; i < N; i++)
    if (d[i] > 25) cuantos++;

int k = 0;                               // C: imprimir todo -El while sigue mientras k < N, pero dentro del ciclo nunca se le suma nada a k, falta agregar k++
while (k < N) { std::cout << d[k] << ' '; k++; }

return 0;
}