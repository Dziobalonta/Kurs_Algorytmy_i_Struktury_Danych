#include <iostream>
#include "StosTablicowy.h"

using std::cout;
using std::endl;

Stos::Stos()
{
    Top = -1;
}

void Stos::Push(elementtype x)
{
    if (Top < maxlength-1)
    {
        Top++;
        S[Top] = x;
    } else cout << "Brak miejsca w stosie!\n";
    
}

void Stos::Pop()
{
    if (Top > -1) Top--;
    else cout << "Stos jest pusty!\n";
    
}


bool Stos::Empty()
{
    if (Top == -1) return true;
    else return false;
}

elementtype Stos::TopElem()
{
    if (Top != -1) return S[Top];
    else cout << "Stos jest pusty!\n";
    return -1;   
}

void Stos::Makenull()
{
    Top = -1;
}

void Stos::Print()
{
    for (int i = 0; i <= Top; i++)
    {
        cout << S[i] << " ";
    }
    cout << endl;
}