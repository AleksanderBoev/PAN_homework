#include "iostream"

class Sensor
{
    double signalStrength;
    bool isActive;
public:
    Sensor(double strength)
    {
        setSignalStrength(strength);
        isActive = true;
    }
    void activate() { isActive = true; }
    void deactivate() { isActive = false; }
    void setSignalStrength(double s) { signalStrength = (s < 0) ? 0 : s; }
    double getSignalStrength() { return signalStrength; }
    void printStatus()
    {
        std::cout << (isActive ? "Датчик активен" : "Датчик выключен")
                  << " | Сила сигнала: " << signalStrength << " дБ\n";
    }
};

int main()
{
    Sensor s1(45.5);
    s1.printStatus();
    s1.setSignalStrength(-10);
    s1.printStatus();
    s1.deactivate();
    s1.printStatus();
    return 0;
}