#include "iostream"
#include "vector"
#include "algorithm"

int main()
{
    std::vector<double> times = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::vector<double> heights = {35.0, 20.0, 5.0, -2.5, -15.0};

    auto it = std::find_if(heights.begin(), heights.end(), [](double h) { return h <= 0.0; });
    if (it == heights.end())
    {
        std::cout << "Падения не было в диапазоне\n";
    }
    else
    {
        size_t idx = std::distance(heights.begin(), it);
        double t_fall = times[idx];
        std::cout << "Момент падения t_fall = " << t_fall << " с, высота = " << heights[idx] << " м\n";
    }
    return 0;
}