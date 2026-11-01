#include "iostream"
#include "vector"
#include "algorithm"

int main()
{
    double v0 = 50.0, g = 9.8, dt = 1.0;
    std::vector<double> times, heights;

    for (double t = 0.0; t <= 1000; t += dt)
    {
        double h = v0 * t - 0.5 * g * t * t;
        if (h < 0) break;
        times.push_back(t);
        heights.push_back(h);
        std::cout << t << "\t" << h << "\n";
    }

    if (!heights.empty())
    {
        auto it = std::max_element(heights.begin(), heights.end());
        size_t idx = std::distance(heights.begin(), it);
        std::cout << "Max h: " << heights[idx] << " at t = " << times[idx] << "\n";
    }
    return 0;
}