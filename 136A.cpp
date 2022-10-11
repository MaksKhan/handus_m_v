#include <iostream>
#include <vector>
#include <map>

int main()
{
    int n;
    std::cin >> n;
    std::map<int, int> d;

    for (int i = 0; i < n; i++) {
        int k;
        std::cin >> k;
        k -= 1;
        d[k] = i;
    }
    for (int i = 0; i < n; i++) {
        std::cout << d[i] + 1 << " ";
    }
    
}
