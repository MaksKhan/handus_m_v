#include <iostream>
#include <vector>
#include <map>
int main()
{
    int n, k;
    std::cin >> n;
    std::vector<std::vector<char>> v(10);
    
    for (int p = 0; p < n; p++) {
        v[0] = { '.', '.', '.', '.', '.', '.', '.','.', '.', '.' };
        v[9] = { '.', '.', '.', '.', '.', '.', '.','.', '.', '.' };


        for (int i = 1; i <= 8; i++) {

            v[i] = { '.', '.', '.', '.', '.', '.', '.','.', '.', '.' };
            for (int j = 1; j <= 8; j++) {

                std::cin >> v[i][j];
            }

        }

        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                k = 0;
                if (v[i][j] == '#') {
                    if (v[i - 1][j - 1] == '#') k++;
                    if (v[i - 1][j + 1] == '#') k++;
                    if (v[i + 1][j - 1] == '#') k++;
                    if (v[i + 1][j + 1] == '#') k++;
                    if (k > 2) {
                        std::cout << i << " " << j << std::endl;
                    }
               }
            }

        }
    }
}
