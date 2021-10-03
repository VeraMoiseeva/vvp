#include <iostream>
#include <cmath>
int main()
{
    int a, b;
    setlocale(0, "");
    std::cout << "Введите два ненулевых числа\n ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Сумма их модулей:";
    std::cout << abs(a)+abs(b) << "\n";
    std::cout << "Разность их модулей:";
    std::cout << abs(a) - abs(b) << "\n";
    std::cout << "Произведение их модулей:";
    std::cout << abs(a) * abs(b) << "\n";
    std::cout << "Частное их модулей:";
    std::cout << abs(float(a)) / abs(float(b)) << "\n";
}
