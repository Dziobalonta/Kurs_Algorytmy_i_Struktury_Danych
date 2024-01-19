#include <iostream>
#include "ListaWskaznikowa.h"

Lista::Lista() //tworzy glowe
{
    l = new celltype;
    l -> next = NULL;
}

void Lista::Insert(elementtype x, position p)
{
    celltype* tmp;
    tmp = p -> next;
    p -> next = new celltype;
    p -> next -> element = x;
    p -> next -> next = tmp;
}

void Lista::Delete(position p)
{
    celltype* tmp;
    tmp = p -> next;
    p -> next = p-> next -> next;
    delete tmp;
}

position Lista::Locate(elementtype x)
{
    position tmp;
    tmp = l; //ustawimy tmp na glowe listy
    while (tmp -> next != NULL)
    {
        if(tmp -> next -> element == x) return tmp;
        tmp = tmp -> next;
    }
    return tmp;
}

elementtype Lista::Retrieve(position p)
{
    if(p -> next != NULL) return p -> next -> element;
    else return -10000000; // wartosc ktorej nigdy nieprzechowamy;
}

position Lista::First()
{
    return l;
}

position Lista::Next(position p)
{
    return p -> next;
}

position Lista::Previous(position p)
{
    position tmp;
    tmp = l;
    while (tmp -> next != p) tmp = tmp -> next;
    return tmp;
}

position Lista::END()
{
    position tmp = l;
    while (tmp -> next != NULL) tmp = tmp -> next;
    return tmp;
}

Lista::~Lista()
{
    while (l -> next != NULL)
    {
        position tmp = l -> next;
        l -> next = tmp -> next;
        delete tmp;
    }
    delete l;    
}


void Lista::Print_List()
{
    position tmp = l -> next;
    while (tmp != NULL)
    {
        std::cout << tmp -> element << " ";
        tmp = tmp -> next;
    }
    std::cout << std::endl;
    
}
