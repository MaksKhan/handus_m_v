#include <iostream>

int main() {
    int x;
    std::cin >> x;
    for (int i = 0; i < x; i++) {
        int n;
        std::cin >> n;
        for (int j = 0; j < n; j++) {
            std::cout << "1 ";
            for (int k = 1; k < j; k++) {
                std::cout << "0 ";
            }
            if (j != 0){
                std::cout << "1";
            }
            std::cout << "\n";           
        }
    }
}
