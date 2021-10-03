#include <iostream>
int main()
{
    float a, b;
    setlocale(0, "");
    std::cout << "Введите два числа a и b\n ";
    std::cin >> a;
    std::cin >> b;
    std::cout << "Их среднее арифметическое:";
    std::cout << (a + b)/2 << "\n";
}
