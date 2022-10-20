#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
int main()
{
    int t, x, answer;
    std::cin >> t;
    for (int p = 0; p < t; p++) {
        answer = 0;
        for (int i = 0; i < 4; i++) {
            std::cin >> x;
            

            answer += x;
            
        }
        if (answer == 0) {
            std::cout << 0 << std::endl;
        }
        else if (answer == 4) {
            std::cout << 2 << std::endl;
        }
        else {
            std::cout << 1 << std::endl;
        }
    }
    

}
