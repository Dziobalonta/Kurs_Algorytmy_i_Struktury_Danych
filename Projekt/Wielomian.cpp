#include <vector>
#include <iostream>
#include "Wielomian.h"

Wielomian::Wielomian(std::vector<double> ListaWspol) : wspolczynniki(ListaWspol) {}

Wielomian Wielomian::operator+(const Wielomian& other) 
{
    std::vector<double> wynik(std::max(wspolczynniki.size(), other.wspolczynniki.size()));
    for (int i = 0; i < wynik.size(); i++) 
    {
        if (i < wspolczynniki.size()) wynik[i] += wspolczynniki[i];
        if (i < other.wspolczynniki.size()) wynik[i] += other.wspolczynniki[i];
    }
    return wynik;
}

Wielomian Wielomian::operator-(const Wielomian& other) 
{
    std::vector<double> wynik(std::max(wspolczynniki.size(), other.wspolczynniki.size()));
    for (int i = 0; i < wynik.size(); i++) 
    {
        if (i < wspolczynniki.size()) wynik[i] += wspolczynniki[i];
        if (i < other.wspolczynniki.size()) wynik[i] -= other.wspolczynniki[i];
    }
    return wynik;
}

Wielomian Wielomian::operator*(const Wielomian& other) 
{
    std::vector<double> wynik(wspolczynniki.size() + other.wspolczynniki.size() - 1);
    for (int i = 0; i < wspolczynniki.size(); i++) 
    {
        for (int j = 0; j < other.wspolczynniki.size(); j++) 
        {
            wynik[i + j] += wspolczynniki[i] * other.wspolczynniki[j];
        }
    }
    return wynik;
}

double Wielomian::Oblicz(double x) 
{
    //W(x) = 3x^3 + 3x^2 - 2x + 11 = x(3x^2 + 3x - 2) + 11 = x[x(3x + 3) - 2] + 11
    double wynik = 0;
    for (int i = wspolczynniki.size(); i >= 0; i--)
    {
        wynik = wynik * x + wspolczynniki[i];
    }
    
    return wynik;
}

void Wielomian::Print()
{
    for (int i = wspolczynniki.size() - 1; i >= 0; i--)
    {
        if (i == 1)
        {
            std::cout << wspolczynniki[i] << "x + ";
        } else if (i == 0)
        {
            std::cout << wspolczynniki[i] << std::endl;
        } else std::cout << wspolczynniki[i] << "x^(" << i << ") + "; 
    }
    
}
