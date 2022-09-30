// Binary Search Tree converted from Java to C 

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *leftNode;
    struct Node *rightNode;
}NODE;

NODE *createNode(int data) 
{
    NODE* result = malloc(sizeof(NODE));
    if(result != NULL)
    {
        result -> data = data;
        result -> leftNode = NULL;
        result -> rightNode = NULL;
    }
    return result;
}

NODE *root;

void BinarySearchTree()
{
    root = NULL;
};

int factorial(int number)
{
    int fact = 1;

    if (number == 0)
    {
        return 1;
    }

    else
    {
        while(number > 1)
        {
            fact = fact * number;
            number--;
        }
        return fact;
    } 
}

int numOfBST(int key)
{
    int catalanNumber = factorial(2 * key) / (factorial(key + 1) * factorial(key));
    return catalanNumber;
}

int main()
{
    printf("Total number of possible Binary Search Trees with given key: %d \n" , numOfBST(5));
    return 0;
}