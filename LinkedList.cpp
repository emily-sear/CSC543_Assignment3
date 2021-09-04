#include "LinkedList.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

LinkedList::LinkedList()
{
    this->head = NULL;
    this->tail = NULL;
    this->count = 0;
}

void LinkedList::display()
{
    if(this->count == 0)
    {
        cout << "There is nothing to display" << endl;
    }
    else
    {
        Node* currNode = this->head;
        while(currNode->getNextNode() != NULL)
        {
            cout << currNode->getRow() << " " << currNode->getColumn() << " " << currNode->getValue() << endl;
            currNode = currNode->getNextNode();
        }
        cout << currNode->getRow() << " " << currNode->getColumn() << " " << currNode->getValue() << endl;

    }
}

void LinkedList::addEnd(int row, int column, int value)
{
    Node* n = new Node(row, column, value);

    if(head == NULL)
    {
        this->head= n;
        this->tail=n;
    }
    else
    {
        this->tail->setNextNode(n);
        this->tail = n;
    }
    this->count++;
}

int LinkedList::removeEnd()
{
    if(this->count > 0)
    {
        Node* n = this->tail;
        int value = n->getValue();

        if(this->count == 1)
        {
            this->head = NULL;
            this->tail = NULL;
        }
        else
        {
            Node* currNode = this->head;
            while(currNode->getNextNode() != tail)
            {
                currNode = currNode->getNextNode();
            }
            this->tail = currNode;
            this->tail->setNextNode(NULL);
        }

        this->count--;
        delete(n);
        return value;
    }
}

