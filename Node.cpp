#include "Node.hpp"
#include <stdlib.h>

using namespace std;

Node::Node(int row, int column, int value)
{
    this->row = row;
    this-> column = column;
    this->value = value;
    this->nextNode = NULL;
}

void Node::setNextNode(Node* n)
{
    this->nextNode = n;
}

Node* Node::getNextNode()
{
    return this->nextNode;
}

int Node::getRow()
{
    return this->row;
}

int Node::getColumn()
{
    return this->column;
}

int Node::getValue()
{
    return this->value;
}