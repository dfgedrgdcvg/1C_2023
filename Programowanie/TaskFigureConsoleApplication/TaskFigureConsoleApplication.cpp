// TaskFigureConsoleApplication.cpp 
//Napisz klasy kt�re opisz� figury geometryczne:
//trapez, romb, r�wnoleg�obok, prostok�t i kwadrat.
//Zdefiniuj podstawowe metody.
#include <iostream>
#include <cmath>

class trapeze {
public:
    double a, b, h;

    trapeze(double a, double b,double h) : a(a), b(b), h(h) {}

    double area() {
        return (a + b) * h / 2;
    }

    double circuit() {
        double side = sqrt(pow((b - a) / 2, 2) + pow(h, 2));
        return a + b + 2 * side;
    }
};

class rhombus {
public:
    double a, h;

    rhombus(double a, double h) : a(a), h(h) {}

    double area() {
        return a * h;
    }

    double circuit() {
        return 4 * a;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
