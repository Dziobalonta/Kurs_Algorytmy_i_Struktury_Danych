typedef int elementtype, position;
const int maxlength = 3;

class Stos
{
    int S[maxlength] ;
    position Top;//szczyt stosu
    public:
    Stos();
    void Push(elementtype x);
    void Pop();
    bool Empty();
    elementtype TopElem();
    void Makenull();
    void Print();
};
