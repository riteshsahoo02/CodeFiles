#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void display()
{
    struct node *temp = head;
    int count = 0;
    printf("Elements in double LL:\n");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("Length of double LL: %d", count);
}
void create()
{
    head = 0;
    int choice = 1;
    printf("Creating Double LL:\n");
    while (choice)
    {
        struct node *newnode, *temp;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = temp = newnode;
            newnode->prev = head;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        printf("Do you want to continue (0 or 1):");
        scanf("%d", &choice);
    }
    display();
}

int count()
{
    struct node *temp;
    temp = head;
    int count = 0;
    while (temp != 0)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void insertAtBeginning()
{
    printf("Insert At Beginning in double LL:\n");
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    newnode->prev = head;
    newnode->next->prev = newnode;
    display();
}
void insertAtEnd()
{
    printf("Insert At End in double LL:\n");
    struct node *newnode, *temp;
    temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    newnode->next = 0;
    newnode->prev = 0;
    temp->next = newnode;
    newnode->prev = temp;
    display();
}
void insertAtPos()
{
    printf("Insert at Pos:\n");
    int pos;
    printf("Enter position to insert data:");
    scanf("%d", &pos);
    if (pos < 0 && pos > count())
    {
        printf("Invalid Position");
    }
    else if (pos == 1)
    {
        insertAtBeginning();
    }
    else if (pos == count())
    {
        insertAtEnd();
    }
    else
    {
        struct node *newnode;
        struct node *temp = head;
        int i = 1;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next->prev = newnode;
        display();
    }
}
void deleteAtBeginning()
{
    printf("Delete element at beginning:\n");
    struct node *q = head;
    head = head->next;
    head->prev = head;
    q->next = 0;
    free(q);
    display();
}
void deleteAtEnd()
{
    printf("Delete element at end:\n");
    struct node *temp, *q;
    q = temp = head;
    while (temp->next->next != 0)
    {
        temp = temp->next;
    }
    q = temp->next;
    temp->next = 0;
    free(q);
    display();
}
void deleteAtPos(){
    printf("Delete at Pos:\n");
    int pos;
    printf("Enter position to delete data:");
    scanf("%d", &pos);
    if (pos < 1 || pos > count())
    {
        printf("Invalid Position");
    }
    else if (pos == 1)
    {
        deleteAtBeginning();
    }
    else if (pos == count())
    {
        deleteAtEnd();
    }
    else{
        struct node *q;
        struct node *temp = head;
        int i = 1;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        q = temp->next;
        temp->next = temp->next->next;
        temp->next->next->prev = temp;
        free(q);
        display();
    }
        
}

void reverseD_LL()
{
    head->prev = 0;
    printf("Reversed Linked List:\n");
    struct node *currnode, *nextnode, *tail;
    tail =currnode = head;
    while(tail->next != 0){
        tail = tail->next;
    }
    while (currnode != 0)
    {
        nextnode = currnode->next;
        currnode->next = currnode->prev;
        currnode = nextnode;
    }
    currnode = head;
    head = tail;
    tail = currnode;
    display();
}
void main()
{
    create();
    printf("\n------------------------------------------------\n");
    insertAtBeginning();
    printf("\n------------------------------------------------\n");
    insertAtEnd();
    printf("\n------------------------------------------------\n");
    insertAtPos();
    printf("\n------------------------------------------------\n");
    deleteAtBeginning();
    printf("\n----------------------------------------------------------------------\n");
    deleteAtEnd();
    printf("\n----------------------------------------------------------------------\n");
    reverseD_LL();
    printf("\n----------------------------------------------------------------------\n");
    deleteAtPos();
    printf("\n----------------------------------------------------------------------\n");
}