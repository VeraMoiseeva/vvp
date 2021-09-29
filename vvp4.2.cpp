
#include <iostream>

int main()
{
    int d;
    setlocale(0, "");
    std::cout << "Введите диаметр окружности d\n ";
    std::cin >> d;
    std::cout << "Длина окружности:";
    std::cout << d * 3.14 << "\n";
}