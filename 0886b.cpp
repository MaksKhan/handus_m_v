#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
int main()
{
    int n, last;   
    std::cin >> n;
 
    std::vector<int> v(n);
    std::set<int> t;
 
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }
    last = v[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        
        if (t.find(v[i]) != t.end()) {
            
            
            
        }
        else {
            last = v[i];
            t.insert(v[i]);
        }
    }
    std::cout << last;
}
