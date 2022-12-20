#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>
#define _USE_MATH_DEFINES
#include "Vector.hpp"





int main()
{
    Rdec2D r{0, 10 };
    Rdec2D v{0.314, 0};
    Rdec2D g{-1, -10};
    Rdec2D a = { 0, 0 };
    double t = 1, radious = 2;

    std::ofstream out("C:/Users/handu/Рабочий стол/answer.csv");
    out << 'x' << ';' << 'y' << std::endl;
    std::cout << lenght(r);
    for (int i = 0; i < 1000; i++) {
        g = r * (-1) * (1 / lenght(r)) * (1 / pow(lenght(r), 2));

        v = v + g * t + a * t;

        r = r + v * t;

        if (pow(r.x, 2) + pow(r.y, 2) <= pow(radious, 2)) {
            Rdec2D prev = r - v * t;
            r = prev;
            r = r * (-1);
            g = r * (1 / lenght(r)) * (1 / pow(lenght(r), 2));
        }

        out << r.x << ';' << r.y << std::endl;
    }
    std::cout << "Program is completed. File is here : C:/Users/handu/Рабочий стол/answer.csv";

}
