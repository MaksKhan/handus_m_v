#include <iostream>
#include <vector>



int main() {
    
    std::vector<int> v;
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;
        int temp;
        int x;
        std::cin >> x;
        v.push_bach(x);
        for (int j = 1; j < n; j++) {
            std::cin >> temp;
            v[i] &= temp;
        }
    }
    for (int i = 0; i < t; i++) {
        std::cout << v[i] << "\n";
    }
}
