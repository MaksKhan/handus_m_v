#include <iostream>
#include <string>

int main() {
    int n;
    std::string s;
    std::cin >> n >> s;
    int sum = 0, x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] == 'U'){
          y++;
        }
        else{
          x++;
        }
        if (x == y) {
            flag = true;
        } else if (flag && s[i] == s[i - 1]) {
            flag = false;
            sum++;
        } else {
            flag = false;
        }
    }
    //fdsf
    std::cout << sum;
}
