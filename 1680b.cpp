#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
int main()
{
    int t, n, m, main_i, main_j;
    bool answer;
    char x;
    std::cin >> t;
    for (int p = 0; p < t; p++) {
        std::cin >> n >> m;
        answer = true;
        main_i = -1;
        main_j = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> x;
                if (x == 'R' && main_i == -1 && main_j == -1) {
                    main_i = i;
                    main_j = j;
                }
                if (x == 'R' && j < main_j) {
                    answer = false;
                }
            }
        }
        if (answer) std::cout << "YES" << std::endl;
        else std::cout << "NO" << std::endl;
    }
 
}
