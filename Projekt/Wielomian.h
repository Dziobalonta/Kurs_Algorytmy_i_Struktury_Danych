#include <vector>

class Wielomian {
public:
    std::vector<double> wspolczynniki;

    Wielomian(std::vector<double> wspolczynniki);
    Wielomian operator+(const Wielomian& other);
    Wielomian operator-(const Wielomian& other);
    Wielomian operator*(const Wielomian& other);
    double Oblicz(double x);
    void Print();
};
