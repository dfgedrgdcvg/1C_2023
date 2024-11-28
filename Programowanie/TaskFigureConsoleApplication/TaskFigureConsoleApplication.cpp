// TaskFigureConsoleApplication.cpp 
//Napisz klasy które opisz¹ figury geometryczne:
//trapez, romb, równoleg³obok, prostok¹t i kwadrat.
//Zdefiniuj podstawowe metody.
#include <iostream>
#include <cmath>

//trapez

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

//romb

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

//rownoleglobok

class parallelogram {
public:
    double a, b, h;
    parallelogram(double a, double b, double h) : a(a), b(b), h(h) {}

    double area() {
        return a * h;
    }

    double circuit() {
        return 2 * (a + b);
    }
};

//prostok¹t

class rectangle {
public:
    double a, b;

    rectangle(double a, double b) : a(a), b(b) {}

    double area() {
        return a * b;
    }

    double circuit() {
        return 2 * (a + b);
    }
};

//kwadrat

class square {
public:
    double a;

    square(double a) : a(a) {}

    double area() {
        return a * a;
    }

    double circuit() {
        return 4 * a;
    }
};

int main()
{
    trapeze trapeze(3, 4, 5);
    rhombus rhombus(4, 3);
    parallelogram parallelogram(3, 4, 5);
    rectangle rectangle(4, 5);
    square square(4);

    std::cout << "pole trapeza : " << trapeze.area() << "obwod : " << trapeze.circuit() << std::endl;
    std::cout << "pole rombu : " << rhombus.area() << "obwod : " << rhombus.circuit() << std::endl;
    std::cout << "pole rownoegloboku : " << parallelogram.area() << "obwod : " << parallelogram.circuit() << std::endl;
    std::cout << "pole prostokata : " << rectangle.area() << "obwod : " << rectangle.circuit() << std::endl;
    std::cout << "pole kwadratu : " << square.area() << "obwod : " << square.circuit() << std::endl;
}
