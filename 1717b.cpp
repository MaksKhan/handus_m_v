#include <iostream>
#include <vector>
 

 
int main()
{
    int t, n, k, r, c;
    std::vector<std::vector<int>> v;
    
    std::cin >> t;
    for(int _ = 0; _ < t; _ ++){
        
        std::cin >> n;
        std::cin >> k;
        std::cin >> r;
        std::cin >> c;
        r --;
        c --;
        
        for(int i = 0; i < n; i ++){
            for(int j = 0; j < n; j ++){
                if (((i + j - c - r) % n) % k == 0){
                    std::cout << "X";
                }
                else{
                    std::cout << ".";
                }
            }
            std::cout << std::endl;
        }
        
    }
}
