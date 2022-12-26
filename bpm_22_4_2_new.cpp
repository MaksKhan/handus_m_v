#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>
#define _USE_MATH_DEFINES


int main()
{
    double x, y;
    double k1 = 0, k2 = 0, all = 0;

    std::cin >> x >> y;
    while (!std::cin.fail()) {
       

        if ((x < 0 && y > 0 && (abs(x) + y >= 0.5)) || (x > 0 && y < 0 && (abs(y) + x >= 0.5))) {
            k1++;

        }
        
        else {
            k2++;

        }
        all++;
        std::cin >> x >> y;

    }
    double persent_k1 = k1 / all;
    double persent_k2 = k2 / all;
    std::cout << " In Zone " << k1 << "\n";
    std::cout << " Out of Zone " << k2 << "\n";
    std::cout << " In Zone in percent " << persent_k1 << "\n";
    std::cout << " Out of Zone in percent " << persent_k2 << "\n";



}
