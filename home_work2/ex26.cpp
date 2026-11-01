#include "iostream"
#include "vector"
#include "algorithm"

int main()
{
    std::vector<double> heights = {5.0, 12.5, 8.0, 25.0, 3.2, 15.0, 9.9, 40.0};

    auto new_end = std::remove_if(heights.begin(), heights.end(), [](double h) { return h < 10.0; });
    heights.erase(new_end, heights.end());

    std::cout << "Обновленный список высот: ";
    for (double h : heights)
    {
        std::cout << h << " ";
    }
    std::cout << "\n";
    return 0;
}