#include "LinkedList.hpp"

class SparseMatrix2
{
    private:
        int** originalMatrix;
        int rowLength;
        int columnLength;
        LinkedList* linkedList;

    public:
        SparseMatrix2(int** originalMatrix, int rowLength, int columnLength);
        void fromMatrixToLinkedList();
        LinkedList* getLinkedList();
        int** getOGMatrix();

};