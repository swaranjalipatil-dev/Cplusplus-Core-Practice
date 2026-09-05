  #include <iostream>
int main() {
    int n = 12;
    if (n > 3 && (n % 2 == 0 || n % 3 == 0))
        std::cout << "composite";
    else std::cout << "Not composite";
}
