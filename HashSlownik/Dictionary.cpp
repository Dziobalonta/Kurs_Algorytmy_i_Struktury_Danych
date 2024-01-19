#include <iostream>
#include <cstring>
#include "Dictionary.h"

dictionary::dictionary() //wypelnia tablice wartosciami NULL
{
    for (int i = 0; i < B; i++)
    {
        D[i] = NULL; 
    }
    
}

dictionary::~dictionary()
{
    Makenull();
}

void dictionary::Makenull()
{
    for (int i = 0; i < B; i++)
    {
        while (D[i] != NULL)
        {
            position tmp = D[i];
            D[i] = D[i] -> next;
            delete tmp;
        }
        D[i] = NULL;
    }
    
}

bool dictionary::Member(elementtype x)
{
    int bucket = H(x);
    position obecny = D[bucket];
    while (obecny != NULL)
    {
        if (strcmp(obecny -> element,x) == 0)
        {
            return obecny -> element;
        }
        obecny = obecny -> next;
    }
    return false;

}

void dictionary::Insert(elementtype x)
{
    if (!Member(x))
    {
        int bucket = H(x);
        position tmp = new celltype;
        tmp -> element = x;
        tmp -> next = D[bucket];
        D[bucket] = tmp;
        
    }
    
}

void dictionary::Delete(elementtype x)
{
    int bucket = H(x);
    position obecny = D[bucket];
    position poprzedni = NULL; // do sprawdzania czy jest pierwszy czy nie
    while(obecny != NULL)
    {
        if (strcmp(obecny -> element,x) == 0)
        {
            if (poprzedni == NULL) //pierwszy element
            {
                D[bucket] = obecny -> next; // czyli na NULL
            } else{
                poprzedni -> next = obecny -> next;
            }
            delete obecny;
            return;
        }
        poprzedni = obecny;
        obecny = obecny -> next;
    }
    

}

int dictionary::H(elementtype x)
{
    return (int)(x[0]) % B;
}