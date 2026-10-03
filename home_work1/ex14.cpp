#include "iostream"

int main()
{
    double ay, t;
    std::cin >> ay >> t;
    if (ay <= 0 || t <= 0)
    {
        return 1;
    }
    double h = 0.5 * ay * t * t;
    std::cout << "output: " << h << std::endl;
    return 0;
}