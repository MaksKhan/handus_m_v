#include <stdio.h>
#include <vector>
#include <iostream>

 
int main()
{
    int k, n, m, sx, sy, d;
    std::vector<int> v(0);
    
    std::cin >> k;
    for (int _ = 0; _ < k; _ ++){
        std::cin >> n;
        std::cin >> m;
        std::cin >> sx;
        std::cin >> sy;
        std::cin >> d;
        if (((sx - d - 1 > 0) & (sy + d < m)) | ((sx + d < n) & (sy - d - 1 > 0))){
            v.push_back(n + m - 2);
        }
        else{
            v.push_back(-1);
        }
    }
    for(auto &i: v){
        std::cout << i << std::endl;
    }
}
