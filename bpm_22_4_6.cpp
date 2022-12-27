#include <iostream>
#include <vector>

int main()
{
    int h, w;
    std::string s;
    bool cws;

    std::cout << "H: ";
    std::cin >> h;

    std::cout << "W: ";
    std::cin >> w;

    std::cout << "cws or cwc? ";
    std::cin >> s;

    if (s == "cws") {
        cws = true;
    }
    else {
        std::cout << "I haven't made this case yet";
        cws = false;
    }
    std::vector<std::vector<int>> vector;
    for (int i = 0; i < w; i++) {
        std::vector<int> v;
        for (int j = 0; j < h; j++) {
            v.push_back(0);
        }
        vector.push_back(v);
    }

    int current_i = w - 1;
    int current_j = h - 1;
    int counter = 1;

    int i_passed = 0;
    int j_passed = 0;
    if (cws) {
        for (int k = 0; k < w * h; k++) {

            for (int i = current_j; i >= 0 + i_passed; i--) {

                vector[current_i][current_j] = counter;
                counter += 1;
                current_j -= 1;
            }
            current_j += 1;



            for (int i = current_i; i >= 0 + j_passed; i -= 1) {
                vector[current_i][current_j] = counter;
                counter += 1;
                current_i -= 1;
            }

            current_i += 1;



            for (int i = current_j; i < h - i_passed; i += 1) {
                vector[current_i][current_j] = counter;
                counter += 1;
                current_j += 1;
            }

            current_j -= 1;
            j_passed += 1;
            for (int i = current_i; i < w - j_passed; i += 1) {
                vector[current_i][current_j] = counter;
                counter += 1;
                current_i += 1;
            }

            i_passed += 1;
            current_i -= 1;


        }



    }



    // вывод

    int k = h * w;
    int l = 0;
    while (k) {
        l += 1;
        k /= 10;
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            int l1 = 0;
            int k1 = vector[i][j];
            while (k1) {
                l1 += 1;
                k1 /= 10;
            }

            for (int f = 0; f < l - l1; f++) {
                std::cout << "0";
            }

            std::cout << vector[i][j] << " ";
        }
        std::cout << "\n";
    }
}


