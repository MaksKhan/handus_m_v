#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
int main()
{
    int n, thomas = 0, sum, x;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < 4; i++) {
        std::cin >> x;
        thomas += x;
        v[0] = thomas;
    }
 
    for (int i = 1; i < n; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            std::cin >> x;
            sum += x;
        }
        v[i] = sum;
    }
 
    std::sort(v.begin(), v.end());
    std::reverse(v.begin(), v.end());
 
    for (int i = 0; i < n ; i++) {
 
        if (v[i] == thomas) {
            std::cout << i + 1;
            break;
        }
        
    }
}
