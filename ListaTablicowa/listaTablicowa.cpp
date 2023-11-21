    typedef int elementtype, position ;
    const int maxlength=10;
    struct List
    {
        elementtype elements[maxlength];
        int last;           //indeks ostatniego elementu listy
    };

    position END(List l)
    { 
        return l.last+1;
    }

    position First(List l) 
    {
        return 0;
    }

    position Next(position p,List l)
    {
        if (p >= 0 && p < maxlength)
        {
            return p+1;
        } else return -1;
        
    }

    position Previous(position p,List l) 
    {
        if (p > 0 && p < maxlength)
        {
            return p-1;
        } else return -1;
    }

    position Locate(elementtype x, List l) 
    { //zwraca pozycje x w l, gdy nie ma x w l zwraca end(l)
        for (int i = 0; i < END(l); i++)
        {
            if (x == l.elements[i])
            {
                return i;
            }
        }
        return END(l);
        
    }

    elementtype Retrieve(position p, List l) 
    {
        if(p >=0  && p < maxlength)
        {
            return l.elements[p];
        } else return -10000000; // wartosc ktorej nigdy nieprzechowamy
    }

bool Insert(int x, position p, List &l)
{
    if(l.last < maxlength)
    {
        if (p>=0)
        {
            
            for (int i = l.last; i >= p; i--)
            {
                l.elements[i+1] = l.elements[i];
            }
            l.last++;
            l.elements[p] = x;
            return true;
        } else return false; // p jest niepoprawne
        
    } else return false; // brak miejsca w tablicy
}

bool Delete(position p, List &l)
{
    if(l.last >= 0)
    {
        if (p >= 0 && p <= l.last)
        {
            for (int i = p; i < l.last; i++)
            {
                l.elements[i] = l.elements[i+1];
            }
            l.last--;
            return true;
        } else return false; // p jest niepoprawne
        
    } else return false; // tablica jest pusta
}

bool Duplicate(List &l)
{
    if(l.last >= 0)
    {
        if(2*END(l) <= maxlength)
        {
            for(int i = END(l); i<=2*END(l); i++) l.elements[i] = l.elements[i-END(l)];
            l.last = 2*END(l) - 1;
            return true;
        } else return false; //zduplikowanie wartosci wyjdzie poz zakres listy
    } else return false; // tablica jest pusta
}

bool Purge(List &l)
{
    if(l.last >= 0)
    {
       for (int i = 0; i < END(l); i++)
       {
        for (int j = i+1; j < END(l); j++)
        {
            if(l.elements[i] == l.elements[j])
            {
                l.last--;
                Delete(j,l);
            }
            

        }
       }
       return true;
    } else return false; // tablica jest pusta
}