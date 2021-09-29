

#include <iostream>
int main()
{
    int a, b;
    setlocale(0, "");
    std::cout << "Введите стороны прямоугольника a и b\n ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Площадь прямоугольника:";
    std::cout << a * b <<  "\n";
    std::cout << "Периметр прямоугольника:";
    std::cout << 2*(a + b);
}
