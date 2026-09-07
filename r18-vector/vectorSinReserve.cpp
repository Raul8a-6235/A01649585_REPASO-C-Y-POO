#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    int capAnterior = v.capacity();
    int reasignaciones = 0;

    for (int i = 0; i < 1000; i++) {
        v.push_back(i);
        if (v.capacity() != capAnterior) {
            std::cout << "tamano " << v.size() << " capacidad " << v.capacity() << '\n';
            capAnterior = v.capacity();
            reasignaciones = reasignaciones + 1;
        }
    }

    std::cout << "Reasignaciones: " << reasignaciones << '\n';

    return 0;
}