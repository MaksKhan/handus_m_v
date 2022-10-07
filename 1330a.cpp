#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
 

int main()
{
    int p, n, x, j, ans;
    std::vector<int> final(0);
    
    std::cin >> p;
    
    for (int _ = 0; _ < p; _ ++){
        
        std::cin >> n;
        std::cin >> x;
        ans = x;
        std::vector<int> v(0);
        std::vector<int>::iterator it;
        
        for (int i = 0; i < n; i ++){
            std::cin >> j;
            v.push_back(j);
            
        }
        sort(v.begin(), v.end());
        for (int i = 0; i <= n + x; i ++){
            
            for(const auto &j: v){
                if (i == j & (j - ans) <= 1){
                    ans ++;
                    break;
                }
            }
        }
        final.push_back(ans);
        
    }
    for(const auto &i: final){
        std::cout << i << std::endl;
    }
    
    return 0;
}
