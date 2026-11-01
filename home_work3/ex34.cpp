#include "iostream"

class Gyroscope
{
    double angularVelocity;
    bool calibrationRequired;
public:
    Gyroscope(double v, bool cal) : angularVelocity(v), calibrationRequired(cal) {}
    void calibrate() { calibrationRequired = false; }
    void printStatus()
    {
        std::cout << "Скорость: " << angularVelocity << "°/с | Калибровка "
                  << (calibrationRequired ? "требуется\n" : "не требуется\n");
    }
};

int main()
{
    Gyroscope g1(120.5, true);
    g1.printStatus();
    g1.calibrate();
    g1.printStatus();
    return 0;
}