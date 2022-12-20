#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>
#define _USE_MATH_DEFINES


int factorial(int x) {
    if (x == 0) {
        return 1;
    }
    else {
        int sum = 1;
        for (int i = 1; i <= x; i++) {
            sum *= i;
        }

        return sum;
    }

}

int main()
{
    double x, y;
    int k1 = 0, k2 = 0;
    while (std::cin >> x >> y) {
        
        if (x < 0 && y > 0 && (abs(x) + y >= 0.5)) {
            k1++;
        }
        else if (x > 0 && y < 0 && (abs(x) + y >= 0.5))  {
            
            k2++;
        }
        
        
    }

    std::cout << " In Zone " << k1 << "\n";
    std::cout << " Out of Zone " << k2 << "\n";
    std::cout << " Prozent " << k1 / k2 << "\n";


}

