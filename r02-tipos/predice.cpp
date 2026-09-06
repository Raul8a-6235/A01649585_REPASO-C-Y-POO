#include <iostream>
#include <string>

int main(){
  //Predicciones
    std::cout << 7 / 2 << '\n';                   // 1. 3
std::cout << 7 / 2.0 << '\n';                     // 2. 3.5
std::cout << 7 % 2 << '\n';                       // 3. 0
std::cout << static_cast<int>(3.99) << '\n';      // 4. 3
std::cout << (1 == 1.0) << '\n';                  // 5. 1
unsigned int u = 3;                               
std::cout << u - 5 << '\n';                       // 6. -2

return 0;
}