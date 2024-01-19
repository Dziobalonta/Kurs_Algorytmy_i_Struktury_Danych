#include <iostream>
#include "StosTablicowy.h"

using std::cout;
using std::endl;

int main()
{
    Stos pile;
    printf("%s\n",pile.Empty() ? "true" : "false");

    pile.Push(5);
    pile.Print();

    printf("%d\n",pile.TopElem());

    printf("%s\n",pile.Empty() ? "true" : "false");

    pile.Pop();
    pile.Print();

    printf("%s\n",pile.Empty() ? "true" : "false");

    pile.Push(2);
    pile.Print();

    pile.Push(3);
    pile.Print();

    printf("%d\n",pile.TopElem());

    pile.Makenull();
    pile.Print();

    printf("%s\n",pile.Empty() ? "true" : "false");
    return 0;

    pile.Push(5);
    pile.Push(5);
    pile.Push(5);
    pile.Push(5);
    pile.Print();
}