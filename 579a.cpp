#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
int main()
{
    int n, ans = 0;
    std::cin >> n;
    while (n) {
        ans += n & 1;
        n >>= 1;
    }
    std::cout << ans;
}
