  #include <iostream>
#include <numeric>
int main() {
    int a = 15, b = 28;
    std::cout << a << " and " << b << (std::gcd(a, b) == 1 ? " are co-prime.":
}
