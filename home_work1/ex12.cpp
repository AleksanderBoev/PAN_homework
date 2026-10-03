#include "iostream"

double calc_resistance(double Ro, double V, double S, double Cd)
{
    return 0.5*Ro*V*V*S*Cd;
}

int main()
{
    double S, V, Ro, Cd;
    std::cin >> S >> V >> Ro >> Cd;
    double L = calc_resistance(Ro, V, S, Cd);
    std::cout << "output: " << L << std::endl;
    return 0;
}