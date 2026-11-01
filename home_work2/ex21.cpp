#include "iostream"
#include "iostream"
#include "vector"
#include "iomanip"

#define g 9.8

int main()
{
    double v0 = 50.0, dt = 1.0;
    if (v0 <= 0)
    {
        std::cout << "Предупреждение: v0 <= 0\n";
        return 0;
    }

    std::vector<double> times, heights;
    times.reserve((int)(v0 * 2 / g / dt));
    heights.reserve((int)(v0 * 2 / g / dt));

    for (double t = 0.0; t <= 1000.0; t += dt)
    {
        double h = v0 * t - 0.5 * g * t * t;
        if (h < 0) break;
        times.push_back(t);
        heights.push_back(h);
    }

    std::cout << std::setw(10) << "Время" << std::setw(12) << "Высота\n";
    for (size_t i = 0; i < times.size(); i++)
    {
        std::cout << std::setw(10) << std::fixed << std::setprecision(2) << times[i]
                  << std::setw(12) << heights[i] << "\n";
    }
    return 0;
}