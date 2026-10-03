#include "iostream"


int main()
{
    double m,L, D, T;
    const double g = 9.81;
    std::cin>>m>>L>>D>>T;
    if(m<=0)
    {
        return 1;
    }
    double a = (T-D)/m;
    double ay = (L-m*g)/m;
    std::cout<<"a = "<<a<<std::endl;
    std::cout<<"ay = "<<ay<<std::endl;
}