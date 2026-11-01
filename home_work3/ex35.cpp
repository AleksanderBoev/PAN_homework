#include "iostream"

class Autopilot
{
    double courseAngle, altitude;
public:
    Autopilot(double c, double a) : courseAngle(c), altitude(a) {}
    void changeCourse(double delta) { courseAngle += delta; }
    void changeAltitude(double delta) { altitude += delta; }
    void printStatus()
    {
        std::cout << "Курс: " << courseAngle << "°, высота: " << altitude << " м\n";
    }
};

int main()
{
    Autopilot a1(90, 1000);
    a1.changeCourse(10);
    a1.changeAltitude(500);
    a1.printStatus();
    return 0;
}