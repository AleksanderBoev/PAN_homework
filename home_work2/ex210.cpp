#include "iostream"
#include "vector"

struct Point
{
    double x, y, z;
};

class Rocket
{
    double x = 0, y = 0, z = 0;
    double vx, vy, vz;
public:
    Rocket(double vx0, double vy0, double vz0) : vx(vx0), vy(vy0), vz(vz0) {}
    void updatePosition(double dt)
    {
        x += vx * dt;
        y += vy * dt;
        z += vz * dt;
    }
    void changeVelocity(double dvx, double dvy, double dvz)
    {
        vx += dvx;
        vy += dvy;
        vz += dvz;
    }
    Point getPosition() { return {x, y, z}; }
};

int main()
{
    std::vector<Rocket> squad;
    squad.reserve(5);
    squad.emplace_back(10, 0, 50);
    squad.emplace_back(15, -5, 40);
    squad.emplace_back(20, 5, 60);
    squad.emplace_back(5, 10, 30);
    squad.emplace_back(12, 2, 45);

    std::vector<std::vector<Point>> trajectories(5);
    double T = 10.0, dt = 1.0;

    for (double t = 0.0; t <= T; t += dt)
    {
        for (size_t i = 0; i < squad.size(); ++i)
        {
            trajectories[i].push_back(squad[i].getPosition());
            squad[i].updatePosition(dt);
        }
    }

    for (size_t i = 0; i < squad.size(); ++i)
    {
        Point p = trajectories[i].back();
        std::cout << "Ракета " << i + 1 << " конечное положение: ("
                  << p.x << ", " << p.y << ", " << p.z << ")\n";
    }
    return 0;
}