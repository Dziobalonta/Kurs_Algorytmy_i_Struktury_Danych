typedef int elementtype;

struct celltype
{
    elementtype element;
    celltype* next;
};

typedef celltype* position;

class Lista
{
    protected:
    position l; // wskaźnik do głowy listy

    public:
    Lista(); //konstruktor

    ~Lista(); //destruktor
    
    void Insert(elementtype x, position p);
    void Delete(position p);
    elementtype Retrieve(position p);
    position Locate(elementtype x);
    position First();
    position Next(position p);
    position Previous(position p);
    position END();
    void Print_List();
};