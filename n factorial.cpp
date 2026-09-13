#include <iostream>
int main() {
    int fact = 1;
    for (int i = 1; i <= 5; ++i) fact *= i;
    std::cout << "Factorial is: " << fact;
}
