#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
int main()
{
    int t, n, first, last, x;
    std::cin >> t;
    for (int _ = 0; _ < t; _++) {
        std::cin >> n;
        first = 0;
        last = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> x;
            if (first == 0 && x == 0) {
                first = i;
            }
            if (x == 0) {
                last = i;
            }
        }
        if (first == 0 && last == 0) {
            std::cout << 0 << std::endl;
        }
        else if (first == last) {
            std::cout << 2 << std::endl;
        }
        
        else {
            std::cout << last - first + 2 << std::endl;
        }

    }
    

}
