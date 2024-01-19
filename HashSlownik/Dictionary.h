const int B = 65;
typedef const char* elementtype;

struct celltype
{
    elementtype element;
    celltype* next;
};

typedef celltype* position;

class dictionary
{
    protected :
    position D[B];  //tablica nagłówków list
    public:
    dictionary();
    ~dictionary();
    void Makenull();
    bool Member(elementtype x);
    void Insert(elementtype x);
    void Delete(elementtype x);
    int H(elementtype x);
};
