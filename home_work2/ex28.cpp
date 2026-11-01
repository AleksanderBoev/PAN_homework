#include "iostream"
#include "vector"
#include "algorithm"
#include "iomanip"

int main()
{
    std::vector<double> times1 = {0, 1, 2, 3, 4}, heights1 = {5, 30, 55, 25, 0};
    std::vector<double> times2 = {0, 1, 2, 3, 4, 5}, heights2 = {5, 25, 45, 35, 15, -2};

    auto it_max1 = std::max_element(heights1.begin(), heights1.end());
    double max1 = *it_max1;
    double t_max1 = times1[std::distance(heights1.begin(), it_max1)];

    auto it_max2 = std::max_element(heights2.begin(), heights2.end());
    double max2 = *it_max2;
    double t_max2 = times2[std::distance(heights2.begin(), it_max2)];

    auto it_fall1 = std::find_if(heights1.begin(), heights1.end(), [](double h) { return h <= 0.0; });
    double t_fall1 = (it_fall1 != heights1.end()) ? times1[std::distance(heights1.begin(), it_fall1)] : -1.0;

    auto it_fall2 = std::find_if(heights2.begin(), heights2.end(), [](double h) { return h <= 0.0; });
    double t_fall2 = (it_fall2 != heights2.end()) ? times2[std::distance(heights2.begin(), it_fall2)] : -1.0;

    std::cout << "Выше поднялась ракета " << (max1 > max2 ? 1 : 2) << "\n";
    std::cout << "Дольше в воздухе ракета " << (t_fall1 > t_fall2 ? 1 : 2) << "\n\n";

    std::cout << std::setw(8) << "Ракета" << std::setw(14) << "max_height"
              << std::setw(14) << "time_of_max" << std::setw(14) << "time_of_fall\n";
    std::cout << std::setw(8) << 1 << std::setw(14) << max1 << std::setw(14) << t_max1 << std::setw(14) << t_fall1 << "\n";
    std::cout << std::setw(8) << 2 << std::setw(14) << max2 << std::setw(14) << t_max2 << std::setw(14) << t_fall2 << "\n";
    return 0;
}