//how to write binary tree? 


if(t == NULL)
{
    ...
}
else if(t->prev == NULL)
{
    ...
}
else if(t->next == NULL)
{
    ...
}
return(t);


else if(t->prev->prev == NULL)
{
    t->prev->prev = insert(key, t->prev->prev);
}


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
typedef struct node list;

void inorder(struct node *t){
    if(t != NULL){
        inorder(t->prev);
        printf("%d->",t->data);
        inorder(t->next);
    }
}
//node of queue 
typedef struct null_node {
    list **nodepp;
    struct null_node *next;
} node_pool;
//queue 
typedef struct queue {
    node_pool *head;
    node_pool *tail;
} queue;
//enqueue 
void push(queue *q, list **nodepp){
    node_pool *np = malloc(sizeof(*np));
    np->nodepp = nodepp;
    np->next = NULL;
    if(q->head == NULL){
        q->tail = q->head = np;
    } else {
        q->tail = q->tail->next = np;
    }
}
//dequeue 
list **pop(queue *q){
    node_pool *head = q->head;
    if(head == NULL)
        return NULL;

    q->head = q->head->next;
    if(q->head == NULL)
        q->tail = NULL;
    list **nodepp = head->nodepp;
    free(head);
    return nodepp;
}

void clear_queue(queue *q){
    while(pop(q));
}

list *Head;
queue Q;

struct node *insert(int key, struct node *root){
    list *t = malloc(sizeof(*t));
    t->data = key;
    t->next = t->prev = NULL;
    push(&Q, &t->prev);//enqueue a NULL node
    push(&Q, &t->next);

    if(root == NULL){
        return t;
    }
    list **null_nodep = pop(&Q);//dequeue the node
    *null_nodep = t;//Replace with new node
    return root;
}
int main(void){
    int /*x=1, unused x*/ y, z=1;

    Head = NULL;
    while(z == 1){
        printf("Enter data:");
        scanf("%d",&y);
        Head = insert(y, Head);
        printf("want to insert more:");
        scanf("%d",&z);  
    }
    printf("\nInorder Traversal:");
    inorder(Head);
    clear_queue(&Q);//Discard queued nodes
}


