#include "Node.hh"

Node::Node(Book*& Book){
    this->book = book;
}

Node::~Node(){

}

Book* Node::GetBook() const{
    return book;
}