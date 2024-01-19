#include <iostream>
#include "DrzewoBinarne.h"

BinaryTree::BinaryTree()
{
    T = NULL;
}

void BinaryTree::BuildTree(int m)
{
    T = BuildTree1(m);
}

PNode BinaryTree::BuildTree1(int m)
{
    if (m == 0) return NULL;

    PNode korzen = new Node; // Alokowanie pamieci na korzen

    static int count = 1;
    korzen -> info = count++; // ustawianie info na aktualna wartosci m

    korzen -> left = BuildTree1(m / 2);
    korzen -> right = BuildTree1(m - (m / 2) - 1);
    return korzen;

}

Telement BinaryTree::GetLabel(PNode n)
{
    if (n != NULL)
    {
        return n->info;
    } else return -10000000;   
}

PNode BinaryTree::ROOT()
{
    return T;
}

PNode BinaryTree::LEFT_CHILD(PNode n)
{
    if (n != NULL) return n -> left;
    else return NULL;  
}

PNode BinaryTree::RIGHT_CHILD(PNode n)
{
    if (n != NULL) return n -> right;
    else return NULL;  
}

PNode BinaryTree::PARENT(PNode n)
{
    if (n == ROOT())
    {
        return NULL;
    }
    return PARENT1(n,T);
}

PNode BinaryTree::PARENT1(PNode n, PNode T)
{
    if (T == NULL) // jesli korzen brak parenta
    {
        return NULL;
    }
    
    if (T -> left == n || T -> right == n)
    {
        return T;
    }

    PNode parent = PARENT1(n, T->left);
    if (parent != NULL) 
    {
        return parent;
    }
    
    parent = PARENT1(n, T->right);
    if (parent != NULL) 
    {
        return parent;
    }
    
    return NULL;
}


void BinaryTree::MAKENULL(PNode p)
{
    if (p != NULL)
    {
        MAKENULL(p -> left);
        MAKENULL(p -> right);
        delete p;
    }
    
}

void BinaryTree::PreOrder(PNode t)
{
    if (t != NULL) 
    {
        std::cout << t -> info << " ";
        PreOrder(t -> left);
        PreOrder(t -> right);
    }
}

void BinaryTree::InOrder(PNode t)
{
    if (t != NULL) 
    {
        InOrder(t -> left);
        std::cout << t -> info << " ";
        InOrder(t -> right);
    }
}

void BinaryTree::PostOrder(PNode t)
{
    if (t != NULL) 
    {
        PostOrder(t -> left);
        PostOrder(t -> right);
        std::cout << t -> info << " ";
    }
}

BinaryTree::~BinaryTree()
{
    MAKENULL(T);
}

