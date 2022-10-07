
#include <iostream>
int main()
{
    int n, k = 0;
    std::cin >> n;
    while(n > 0){
        n -= 5;
        k ++;
    }
    std::cout << k;
    
 
    return 0;
}
