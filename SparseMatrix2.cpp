#include "SparseMatrix2.hpp"
#include <stdlib.h>

using namespace std;

SparseMatrix2::SparseMatrix2(int** originalMatrix, int rowLength, int columnLength)
{
    this->originalMatrix = originalMatrix;
    this->rowLength = rowLength;
    this->columnLength = columnLength;
    LinkedList* ll = new LinkedList();
    this->linkedList = ll;
}

void SparseMatrix2::fromMatrixToLinkedList()
{
    for(int i = 0; i < rowLength; i++)
    {
        for(int j = 0; j < columnLength; j++)
        {
            if(this->originalMatrix[i][j] != 0)
            {
                int val = this->originalMatrix[i][j];
                this->linkedList->addEnd(i, j,val);
            }
        }
    }
}

int** SparseMatrix2::getOGMatrix()
{
    return this->originalMatrix;
}

LinkedList* SparseMatrix2::getLinkedList()
{
    return this->linkedList;
}
