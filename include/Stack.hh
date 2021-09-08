#pragma once
#include "Node.hh"
#include "Book.hh"

class Stack{
    private:
       Node*head{nullptr};
    public:
       stack();
       ~Stack();
       Node* GetTop() const;//peek, toma el top/head y lo muestras, pero no lo borra.
       void Pop();//elimina lo que hay en head, osea, lo atiende.
       void Push(Book*& Book);
       bool IsEmpty() const;
       void Print();
};