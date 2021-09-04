class Node
{
    private: 
        int row;
        int column;
        int value;
        Node* nextNode;

    public:
        Node(int row, int column, int value);
        void setNextNode(Node* n);
        Node* getNextNode();
        int getRow();
        int getColumn();
        int getValue();

};