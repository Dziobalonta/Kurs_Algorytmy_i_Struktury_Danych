const int maxlength = 50; //kolejka moze miec tylko maxlen-1 elementow
typedef int elementtype;
typedef int position;

class Kolejka
{
    protected:
    elementtype Queue[maxlength];
    position Front; // Indeks elementu czolowego
    position Rear; // Indeks ostatniego elementu
    
    public:
    Kolejka();
    int AddOne(int i);
    void Enqueue(elementtype x);
    void Dequeue();
    elementtype FrontElem();
    void Makenull();
    bool Empty();

    void Print();
};