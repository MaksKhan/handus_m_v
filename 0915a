#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
int main()
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    
    for (int i = n - 1; i >= 0; i--) {
        if (k % v[i] == 0) {
            n = v[i];
            break;
        }
    }
    std::cout << k / n;
    
 
}
