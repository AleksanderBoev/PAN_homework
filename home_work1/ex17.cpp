#include "iostream"
#define g 9.81

int main()
{
    double T, L, D, a;
    const double m = 1;
    std::cin >> T >> L >> D;
    double ay = (L - m * g) / m;
    if (ay > 0.5)
    {
        std::cout << "набор высоты" << std::endl;
    }
    if (ay >= 0 && ay <= 0.5)
    {
        std::cout << "горизонтальный полет" << std::endl;
    }
    if (ay < 0)
    {
        std::cout << "снижение" << std::endl;
    }
}