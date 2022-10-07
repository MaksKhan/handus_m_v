#include <iostream>
int main()
{
    int n, k, m = 0;
    std::cin >> n;
    std::cin >> k;
    
    for (int i = 0; i < n; i ++){
        int f, t;
        cin >> f;
        std::cin >> t;
        if (t > k){
            if (t - k >= 0){
                m = max(m, f - (t - k));
            }
            else{
                m = max(m, -f - (t - k));
            }
            
        }
        else{
            m = max(m, f);
        }
        
    }
    std::cout << m;
}
