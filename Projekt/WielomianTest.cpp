#include <iostream>
#include "Wielomian.h"

using std::cout;
using std::endl;


int main() {
    Wielomian p1({1, 2, 3});  // 1 + 2x + 3x^2
    Wielomian p2({4, 5});  // 4 + 5x

    p1.Print();

    Wielomian suma = p1 + p2;
    suma.Print();
    
    Wielomian roznica = p1 - p2;
    roznica.Print();

    Wielomian mnozenie = p1 * p2;
    mnozenie.Print();


    cout << "Suma: " << suma.Oblicz(2) << endl;
    cout << "Roznica: " << roznica.Oblicz(2) << endl;
    cout << "Mnozenie: " << mnozenie.Oblicz(2) << endl;

    return 0;
}