#include "Node.hpp"

class LinkedList
{
    private:
        Node* head;
        Node* tail;
        int count;

    public:
        LinkedList();
        void display();
        void addEnd(int row, int column, int value);
        int removeEnd();
};