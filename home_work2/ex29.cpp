#include "iostream"
#include "vector"
#include "iomanip"

int main()
{
    std::vector<double> h = {10.0, 22.0, 19.0, 35.0, 30.0, 45.0, 42.0};
    size_t n = h.size();
    std::vector<double> smoothed(n);

    smoothed[0] = h[0];
    smoothed[n - 1] = h[n - 1];

    for (size_t i = 1; i + 1 < n; ++i)
    {
        smoothed[i] = (h[i - 1] + h[i] + h[i + 1]) / 3.0;
    }

    std::cout << std::setw(12) << "Исходный" << std::setw(15) << "Сглаженный\n";
    for (size_t i = 0; i < n; ++i)
    {
        std::cout << std::setw(12) << std::fixed << std::setprecision(2) << h[i]
                  << std::setw(15) << smoothed[i] << "\n";
    }
    return 0;
}