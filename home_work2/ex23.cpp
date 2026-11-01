#include "iostream"
#include "vector"
#include "iomanip"

#define g 9.8

int main()
{
    double v0 = 50.0, dt = 1.0, t_max = 10.0;
    std::vector<double> times, velocities;

    for (double t = 0.0; t <= t_max; t += dt)
    {
        double v = v0 - g * t;
        times.push_back(t);
        velocities.push_back(v);
    }

    std::cout << std::setw(10) << "t" << std::setw(12) << "v\n";
    for (size_t i = 0; i < times.size(); i++)
    {
        std::cout << std::setw(10) << std::fixed << std::setprecision(2) << times[i]
                  << std::setw(12) << velocities[i] << "\n";
    }
    return 0;
}