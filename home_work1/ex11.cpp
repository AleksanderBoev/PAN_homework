#include "iostream"


int main()
{
    double S, V, Ro, Cl;
    std::cin >> S >> V >> Ro >> Cl;
    double res = 0.5 * Ro * V * V * S * Cl;
    std::cout << "output: " << res << std::endl;
    return 0;
}