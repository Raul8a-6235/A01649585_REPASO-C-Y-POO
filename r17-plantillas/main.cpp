#include <iostream>
#include <string>
#include "arreglo.hpp"

int main() {
    
    Arreglo<double> a(3);
    a[0] = 1.5;
    a[1] = 2.5;
    a[2] = 3.5;

    Arreglo<double> b = a;
    b[0] = 99.9;
    std::cout << "a[0] = " << a[0] << '\n';

    Arreglo<std::string> s(2);
    s[0] = "hola";
    s[1] = "mundo";

    Arreglo<std::string> t = s;
    t[0] = "cambiado";
    std::cout << "s[0] = " << s[0] << '\n';

    return 0;
}