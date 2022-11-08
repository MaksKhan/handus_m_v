#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
int main()
{
    int n, A, B, sum, ans = 0, max = 0, max_i = 0;
    std::cin >> n >> A >> B;
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    sum = 0;
    std::sort(v.begin() + 1, v.end());
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    while (true) {
        
        
        if (A * v[0] / (sum) >= B) {
            std::cout << ans;
            break;
        }
        else {
            
            sum -= v[n - 1 -ans];
            v[n - 1 - ans] = 0;
            ans++;
        }
    }
}
