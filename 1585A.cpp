#include <iostream>
#include <vector>
#include <map>
int main()
{
    int n, k;
    std::cin >> n;
    for (int p = 0; p < n; p++) {
        std::cin >> k;
        std::vector<int> v(n);
        for (int i = 0; i < k; i++) {
            std::cin >> v[i];
        }
        int s = 1;

        for (int i = 0; i < k; i++) {

            // первый день
            if (i == 0) {
                if (v[i] == 1) {
                    s++;
                }
            }

            //остальное
            else {

                // при 0
                if (v[i] == 0) {

                    // завял ли
                    if (v[i - 1] == 0) {
                        s = -1;
                        break;
                    }
                }
                // при 1
                else {

                    //если поливали до этого
                    if (v[i - 1] == 1) {
                        s += 5;
                    }
                    else {
                        s++;
                    }
                }
            }
        }
        std::cout << s << std::endl;
    }
    
}
