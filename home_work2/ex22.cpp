#include "iostream"
#include "vector"
#include "iomanip"

#define g 9.8

int main()
{
    double v0 = 50.0, dt = 1.0;
    std::vector<double> times, heights;

    for (double t = 0.0; t <= 1000.0; t += dt)
    {
        double h = v0 * t - 0.5 * g * t * t;
        if (h < 0) break;
        times.push_back(t);
        heights.push_back(h);
    }

    if (heights.empty())
    {
        std::cout << "Данных нет\n";
        return 0;
    }

    size_t idx_max = 0;
    for (size_t i = 1; i < heights.size(); ++i)
    {
        if (heights[i] > heights[idx_max]) idx_max = i;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Максимальная высота: " << heights[idx_max] << " м в момент t = " << times[idx_max] << " с\n";
    return 0;
}