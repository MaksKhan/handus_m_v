#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
int main()
{
    std::queue<long long> q;
    long long n, k, x, first, max = 0;

    std::cin >> n >> k;
    std::cin >> x;
    

    first = x;

    if (x > max) {
        max = x;
    }
    for (int i = 0; i < n - 1; i++) {
        std::cin >> x;
        q.push(x);
        if (x > max) {
            max = x;
        }
    }

    long long first_wins = 0;
    if (k > n) {
        first = max;
    }
    else {
        while (first_wins < k) {
            if (first > q.front()) {
                q.push(q.front());
                q.pop();
                first_wins++;
            }
            else {
                q.push(first);
                first = q.front();
                q.pop();
                first_wins = 0;

            }
        }
    }
    std::cout << first;
}
