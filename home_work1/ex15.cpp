#include "iostream"
#include "cmath"
#define g 9.81


double calc_resistance(double Ro, double V, double S, double Cd)
{
    return 0.5*Ro*V*V*S*Cd;
}

double calc_lift(double Ro, double V, double S, double Cl)
{
    return 0.5 * Ro * V * V * S * Cl;
}

struct plain{
    double M;
    double S;
    double T;
    double Cd;
    double Cl;
};

int main()
{
    const double Ro = 1.23;
    const double V = 100, h = 100;
    plain plain_list[2];
    std::cout<<"M S T Cd Cl"<<std::endl;
    std::cin >> plain_list[0].M>>plain_list[0].S>>plain_list[0].T >> plain_list[0].Cd >> plain_list[0].Cl;
    std::cin >> plain_list[1].M>>plain_list[1].S>>plain_list[1].T >> plain_list[1].Cd >> plain_list[1].Cl;
    double t_min = 1000000000;
    int num_min = -1;
    for(plain* i = plain_list; i<plain_list+2; i++)
    {
        double D = calc_resistance(Ro, V, i->S, i->Cd);
        double L = calc_lift(Ro, V, i->S, i->Cl);
        double a = (i->T-D)/i->M;
        double ay = (L - g * i->M)/i->M;
        double t = sqrt(2*h/ay);
        if(t<t_min)
        {
            t_min = t;
            num_min = i - plain_list;
        }
    }
    
    std::cout << "faster: " << num_min << std::endl;
    return 0;
}