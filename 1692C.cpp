#include <iostream>
#include <vector>
#include <map>
int main()
{
    int n;
    std::cin >> n;

    for (int p = 0; p < n; p++) {
        int main_i, main_j;
        std::cin >> main_i >> main_j;
        main_i--;
        main_j--;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                int k = abs(main_i - i);
                if (j == main_j + k || j == main_j - k) {
                    std::cout << "#";
                }
                else {
                    std::cout << ".";
                }
            }
            std::cout << std::endl;
        }
    }
    
}
