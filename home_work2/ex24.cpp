#include "iostream"
#include "vector"
#include "numeric"
#include "iomanip"

#define g 9.8

int main()
{
    double v0 = 50.0, dt = 1.0, t_max = 10.0;
    std::vector<double> velocities;

    for (double t = 0.0; t <= t_max; t += dt)
    {
        velocities.push_back(v0 - g * t);
    }

    if (velocities.empty())
    {
        std::cout << "Вектор скоростей пуст\n";
        return 0;
    }

    double sum = std::accumulate(velocities.begin(), velocities.end(), 0.0);
    double avg = sum / velocities.size();

    std::cout << std::fixed << std::setprecision(2) << "Средняя скорость: " << avg << " м/с\n";
    return 0;
}