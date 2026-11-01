#include "iostream"
#include "iomanip"

#define g 9.81

class Engine
{
    double thrust, fuelFlow;
public:
    Engine(double T, double F) : thrust(T), fuelFlow(F) {}
    double getSpecificImpulse() { return thrust / (fuelFlow * g); }
    void printInfo()
    {
        std::cout << "Тяга: " << thrust << " Н | Расход: " << fuelFlow
                  << " кг/с | Удельный импульс: " << std::fixed << std::setprecision(2)
                  << getSpecificImpulse() << " с\n";
    }
};

int main()
{
    Engine e1(5000, 2.5);
    e1.printInfo();
    return 0;
}