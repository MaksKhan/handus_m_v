#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <queue>

// декартово
struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
    


};
 
// норма в декартовом
double norm(struct Rdec2D a) {
    return sqrt(a.x * a.x + a.y * a.y);
}





// скалярное в декартовом
double dot(struct Rdec2D a, struct Rdec2D b) {
    double dot;
    dot = (a.x * b.x + a.y * b.y) / norm(a) / norm(b);
    return dot;

}

// перевод в полярную
void toPl(struct Rdec2D dec) {
    std::cout << "to Pol:" << std::endl;
    double r = sqrt(dec.x + dec.y);
    double phi = tan(dec.y / dec.x);
    std::cout << "Radious: " << r << std::endl << "Angle: " << phi << std::endl;
}

// перегрузка оператора вывода
std::ostream& operator << (std::ostream& ostrm, const Rdec2D& a) {
    return ostrm << '(' << a.x << ", " << a.y << ')';
}

//перегрузка оператора +=
Rdec2D& operator+=(Rdec2D& a,  const Rdec2D& b) {
    a.x += b.x;
    a.y += b.y;
    return a;

}

//перегрузка оператора +
Rdec2D operator+(const Rdec2D& a, const Rdec2D& b) {
    return { a.x + b.x, a.y + b.y };

}

//перегрузка оператора -
Rdec2D operator-(const Rdec2D& a, const Rdec2D& b) {
    return { a.x - b.x, a.y - b.y };

}

//перегрузка оператора * умножение на число
Rdec2D operator*(const Rdec2D& a, const int& b) {
    return { a.x * b, a.y * b};

}



struct Rpol2D {
    double r;
    double phi;

};





int main()
{
    Rdec2D a{1, 3};
    Rdec2D b{2, 7};

    // сами вектора
    std::cout << "vector a: " << a << std::endl;
    std::cout << "vector b: " << b << std::endl;

    // норма вектора а
    std::cout << "norm a: ";
    std::cout << norm(a) << std::endl;

    // норма вектора b
    std::cout << "norm b: ";
    std::cout << norm(b) << std::endl;
    

    // сумма 
    std::cout << "sum: ";
    std::cout << a + b << std::endl;

    // разность 
    std::cout << "dif: ";
    std::cout << a - b << std::endl;

    // умножение на число
    std::cout << "multiplication: int";
    std::cout << a * 3 << std::endl;


    // скалярное
    std::cout << "dot: ";
    std::cout << dot(a, b) << std::endl;

    // вектор а в полярную систему координат
    toPl(a);


    
    
    
}
