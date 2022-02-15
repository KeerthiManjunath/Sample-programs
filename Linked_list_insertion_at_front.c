
//Program to insert a linked list in the front

#include <stdio.h>
#include <stdlib.h>
//creating a node
struct node
{
    int data;
    struct node *next;

};

//Print function to print the nodes
void printfun(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d\t",n->data);
        n=n->next;
       // printf("%d",n->data);
        
    }
}

//Function to insert a node at front of the linked list
void push(struct node **ptr,int new_data) //Function takes pointer to pointer of type struct node and data of type int
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node)); //dynamic memory allocation
    new_node->data = new_data; 
    new_node->next = (*ptr); //pointing new node's pointer to the head of the linked list.Thus the new node becomes the head and the head becomes lastnode pointin NULL
    (*ptr) = new_node;
    
}

int main()
{

struct node *head = NULL;

push(&head,5);
push(&head,6);
push(&head,7);
printfun(head);
  return 0;

}
