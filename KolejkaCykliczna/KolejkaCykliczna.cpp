#include <iostream>
#include "KolejkaCykliczna.h"

Kolejka::Kolejka()
{
    Makenull();
}

void Kolejka::Makenull()
{
    Front = 0;
    Rear = maxlength - 1;
}

int Kolejka::AddOne(int i)
{
    return (i + 1) % maxlength;
}

bool Kolejka::Empty()
{
    return AddOne(Rear) == Front;
}

void Kolejka::Enqueue(elementtype x)
{
    if (AddOne(AddOne(Rear)) == Front) //sprawdza, czy jest miejsce w kolejce (czy kolejka nie jest pelna)
    {
        std::cout << "Kolejka jest pełna"<< std::endl;
    }
    else
    {
        Rear = AddOne(Rear);
        Queue[Rear] = x; 
    }
    
}

void Kolejka::Dequeue()
{
    if (AddOne(AddOne(Rear)) == Front) //sprawdza, czy jest miejsce w kolejce (czy kolejka nie jest pelna)
    {
        std::cout << "Kolejka jest pełna"<< std::endl;
    }
    else
    {
        Front = AddOne(Front);
    }
}

elementtype Kolejka::FrontElem()
{
    if (AddOne(AddOne(Rear)) == Front) //sprawdza, czy jest miejsce w kolejce (czy kolejka nie jest pelna)
    {
        std::cout << "Kolejka jest pełna"<< std::endl;
        return -1;
    }
    else
    {
        return Queue[Front];
    }
}

void Kolejka::Print()
{
    for (int i = Front; i != AddOne(Rear); i = AddOne(i))
    {
        std::cout << Queue[i] << ", ";
    }
    std::cout << std::endl;
    
}
