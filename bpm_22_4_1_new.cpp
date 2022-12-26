#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>


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

    double x = 0.05;
    double sum = 0;
    double current = 0;


    while (x <= 1) {

        sum = 0;
        x += 0.05;

        int i = 0;
        current = pow(x, 2 * i);
        while (current > 0.0001) {

            sum += current;
            i++;
            current = pow(x, 2 * i) / factorial(2 * i);
            
        }

        std::cout << "X: " << x << "; Sum: " << sum << "\n";





    }


}
