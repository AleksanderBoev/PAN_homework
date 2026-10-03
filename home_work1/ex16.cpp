#include "iostream"
#include "cmath"
#include "vector"
#include <iomanip>

using namespace std;

double calc_lift(double Ro, double V, double S, double Cl)
{
    return 0.5 * Ro * V * V * S * Cl;
}

struct point
{
    double v;
    double Ro;
};

int main()
{
    vector<point> d;
    double v, Ro;
    int num;
    cout << "num: ";
    cin >> num;
    const double S = 1, Cl = 1;
    for (int i = 0; i < num; i++)
    {
        cin >> v >> Ro;
        d.push_back(point{v, Ro});
    }
    cout << setw(5) << "Шаг" << "|" << setw(10) << "Скорость" << "|" << setw(10) << "Плотность" << "|" << setw(10) << "Подъемная сила |" << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << setw(5) << i << "|" << setw(10) << d[i].v << "|" << setw(10) << d[i].Ro << "|" << setw(10) << calc_lift(d[i].Ro, d[i].v, S, Cl) << "|" << endl;
    }
    return 0;
}