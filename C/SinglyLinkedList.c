// Singly Linked list converted from Java to C 

#include <stdio.h>
#include <stdlib.h>

typedef struct Node 
{
    int data;
    struct Node *next;

}NODE;

NODE *newNode(int num) 
{
    NODE* result = malloc(sizeof(NODE));

    if(result != NULL) 
    {
        result -> data = num;
        result -> next = NULL;
    }

    return result;
}

NODE *head;
NODE *tail;

void addNode(int data) 
{
    NODE* cNode = newNode(data);
    if(head == NULL) 
    {
        head = cNode;
        tail = cNode;
    } 

    else 
    {
        tail -> next = cNode;
        tail = cNode;
    }
}

void display() 
{
    NODE* current = head;

    if(head == NULL) 
    {
        printf("Empty list");
        return;
    }
    printf("Singly linked list nodes: \n");

    while(current != NULL) 
    {
        printf("%i \n", current -> data);
        current = current -> next;
    }
    printf("\n");
}
 
int main() 
{
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    display();
    return 0;
}