#include "iostream"
#include "algorithm"

#define g 9.81
struct aircraft
{
    double M;
    double T;
    double Cl;
    double Cd;
};

double calc_lift(double Ro, double V, double S, double Cl)
{
    return 0.5 * Ro * V * V * S * Cl;
}

int main()
{
    aircraft data[] = {
        {1, 1, 1, 1},
        {1, 3, 1, 2},
        {1, 3, 2, 1},
        {1, 8, 1, 89},
    };
    const double Ro = 1, V = 1, S = 1;
    for (aircraft *i = data; i < data + sizeof(data) / sizeof(aircraft); i++)
    {
        double L = calc_lift(Ro, V, S, i->Cl);
        double ay = (L - i->M * g) / i->M;
    }
    return 0;
}