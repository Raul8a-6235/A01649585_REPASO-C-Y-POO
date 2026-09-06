#include <iostream>
#include <string>

void intercambiar1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void intercambiar2(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void intercambiar3(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 1, y = 2;

    intercambiar1(x, y);
    std::cout << x << " " << y << '\n';

    intercambiar2(&x, &y);
    std::cout << x << " " << y << '\n';

    x = 1; y = 2;
    intercambiar3(x, y);
    std::cout << x << " " << y << '\n';

    return 0;
}