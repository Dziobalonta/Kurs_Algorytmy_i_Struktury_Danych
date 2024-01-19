#include <iostream>
#include "Dictionary.h"

using std::cout;
using std::endl;

int main()
{
    dictionary slownik;

    slownik.Insert("Ala");
    cout << "   Wstawiono Ala" << endl;
    cout << "Member: " << (slownik.Member("Ala") ? "true" : "false") << endl;
    cout << "\tHash: " << slownik.H("Ala") << endl;

    slownik.Insert("As");
    cout << "   Wstawiono As" << endl;
    cout << "Member: " << (slownik.Member("As") ? "true" : "false") << endl;
    cout << "\tHash: " << slownik.H("As") << endl;


    cout << "Member: " << (slownik.Member("Ala") ? "true" : "false") << endl;
    cout << "\tHash: " << slownik.H("Ala") << endl;

    slownik.Insert("Dziob");
    cout << "   Wstawiono Dziob" << endl;
    cout << "\tHash: " << slownik.H("Dziob") << endl;
    cout << "Member: " << (slownik.Member("Dziob") ? "true" : "false") << endl;

    slownik.Insert("Ala");
    cout << "   Wstawiono Ala" << endl;
    cout << "Member: " << (slownik.Member("Ala") ? "true" : "false") << endl;
    cout << "\tHash: " << slownik.H("Ala") << endl;

    slownik.Delete("As");
    cout << "   Usunieto Ala" << endl;
    cout << "Member: " << (slownik.Member("As") ? "true" : "false") << endl;
    cout << "Member: " << (slownik.Member("Ala") ? "true" : "false") << endl;

    slownik.Makenull();
    cout << "   Makenull" << endl;

    cout << "Member: " << (slownik.Member("As") ? "true" : "false") << endl;
    cout << "Member: " << (slownik.Member("Dziob") ? "true" : "false") << endl;

    return 0;
}