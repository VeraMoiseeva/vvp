#include <iostream>
#include <cmath>
int main()
{
    int a, b;
    setlocale(0, "");
    std::cout << "Введите два ненулевых числа\n ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Сумма их квадратов:";
    std::cout << a*a+b*b << "\n";
    std::cout << "Разность их квадратов:";
    std::cout << a * a - b * b << "\n";
    std::cout << "Произведение их квадратов:";
    std::cout << a * a * b * b << "\n";
    std::cout << "Частное их квадратов:";
    std::cout << (float(a)* float(a)) / (float(b) * float(b)) << "\n";
}
    
