#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>
#include <fstream>
#include <string>



int main()
{
    std::string s1;
    std::string s2;
    std::cin >> s1 >> s2;

    int l1 = s1.size() - 1;
    int l2 = s2.size() - 1;
    int l = std::min(l1, l2);


    std::reverse(s1.begin(), s1.end());
    std::reverse(s2.begin(), s2.end());

    int k = 0;
    for (int i = 0; i <= l; i++) {
        if (s1.at(i) == s2.at(i)) {
            k++;
        }
        else {
            break;
        }
    }

    std::cout << s1.size() + s2.size() - (k) * 2 << "\n";

}

