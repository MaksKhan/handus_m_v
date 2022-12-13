#include <iostream>

// декартово
struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

// длина в декартовом
double lenght(struct Rdec2D a) {
    return sqrt(a.x * a.x + a.y * a.y);
}

// скалярное произведение в декартовом
double dot(struct Rdec2D a, struct Rdec2D b) {
    double dot;
    dot = (a.x * b.x + a.y * b.y) / lenght(a) / lenght(b);
    return dot;
}

// получение направляющего вектора
Rdec2D get_naprav_vector(struct Rdec2D dec) {
    dec.x = dec.x / abs(dec.x);
    dec.y = dec.y / abs(dec.y);
    return dec;
}

// перегрузка оператора вывода
std::ostream& operator << (std::ostream& ostrm, const Rdec2D& a) {
    return ostrm << '(' << a.x << ", " << a.y << ')';
}

//перегрузка оператора +=
Rdec2D& operator+=(Rdec2D& a, const Rdec2D& b) {
    a.x += b.x;
    a.y += b.y;
    return a;
}

//перегрузка оператора + для двух векторов
Rdec2D operator+(const Rdec2D& a, const Rdec2D& b) {
    return { a.x + b.x, a.y + b.y };
}


//перегрузка оператора -
Rdec2D operator-(const Rdec2D& a, const Rdec2D& b) {
    return { a.x - b.x, a.y - b.y };
}

//перегрузка оператора -=
Rdec2D& operator-=(Rdec2D& a, const Rdec2D& b) {
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

//перегрузка оператора * умножение на число
Rdec2D operator*(const Rdec2D& a, const double& b) {
    Rdec2D newV{ a.x * b, a.y * b };
    return newV;
}

//перегрузка оператора / деление на число
Rdec2D operator/(const Rdec2D& a, const double& b) {
    Rdec2D newV{ a.x / b, a.y / b };
    return newV;
}

// перевод в полярную
void toPl(struct Rdec2D dec) {
    std::cout << "to Pol:" << std::endl;
    double r = sqrt(dec.x + dec.y);
    double phi = tan(dec.y / dec.x);
    std::cout << "Radious: " << r << std::endl << "Angle: " << phi << std::endl;
}
 
// полярная
struct Rpol2D {
    double r;
    double phi;

};
