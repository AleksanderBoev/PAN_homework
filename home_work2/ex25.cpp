#include "iostream"
#include "vector"
#include "iomanip"

struct Point
{
    double x, y, z;
};

int main()
{
    double vx = 30.0, vy = 20.0, vz = 40.0;
    double dt = 1.0, t_max = 5.0;
    double x = 0.0, y = 0.0, z = 0.0;

    std::vector<Point> traj;
    traj.reserve((int)(t_max / dt) + 1);

    std::cout << std::setw(8) << "t" << std::setw(10) << "x" << std::setw(10) << "y" << std::setw(10) << "z\n";
    for (double t = 0.0; t <= t_max; t += dt)
    {
        traj.push_back({x, y, z});
        std::cout << std::setw(8) << t << std::setw(10) << x << std::setw(10) << y << std::setw(10) << z << "\n";
        x += vx * dt;
        y += vy * dt;
        z += vz * dt;
    }
    return 0;
}