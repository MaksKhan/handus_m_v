#include <iostream>
#include <cmath>

int main() {
    double n, r;
    std::cin >> n >> r;
    double a = std::numbers::pi / n;
    std::cout << r * std::sin(a) / (1 - std::sin(a));
}
