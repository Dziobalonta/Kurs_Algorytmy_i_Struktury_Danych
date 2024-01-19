typedef int Telement;

struct Node
{
    Telement info;
    Node * left;
    Node * right;
};

typedef Node *PNode;

class BinaryTree
{
    protected:
    PNode T;
    
    public:
    BinaryTree();
    PNode PARENT(PNode n);
    PNode PARENT1(PNode n,PNode T);
    PNode LEFT_CHILD(PNode n);
    PNode RIGHT_CHILD(PNode n);
    Telement GetLabel(PNode n);
    PNode BuildTree1(int m);
    void BuildTree(int m);
    PNode ROOT();
    void MAKENULL(PNode p);
    void PreOrder(PNode t);
    void InOrder(PNode t);
    void PostOrder(PNode t);
    ~BinaryTree();
};