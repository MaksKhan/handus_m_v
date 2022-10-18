#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
int main()
{
    int n, one, zero;
    std::cin >> n;
    std::string s;
    for (int _ = 0; _ < n; _++) {
        
        std::vector<char> v;
        std::cin >> s;
        one = 0;
        zero = s.size() - 1;
        for (int i = 0; i < s.size(); i++) {
            v.push_back(s.at(i));
            if (s.at(i) == '1') {
                one = i;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s.at(i) == '0') {
                zero = i;

            }
        }
        std::cout << zero - one + 1 << std::endl;
        
        
    }
    

}
