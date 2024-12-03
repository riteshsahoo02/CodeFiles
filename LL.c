#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

void display()
{
    struct node *temp;
    temp = head;
    int count = 0;
    printf("Elements in Linked List:\n");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("Length of LL: %d\n", count);
}
void create()
{
    head = 0;
    int choice = 1;
    struct node *newnode, *temp;
    printf("Creating Linked List:\n");
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
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
    printf("Insert at Beginning:\n");
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    display();
}
void insertAtEnd()
{
    printf("Insert at End:\n");
    struct node *temp, *newnode;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp->next = newnode;
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
        display();
    }
}
void reverseLL()
{
    printf("Reversed Linked List:\n");
    struct node *currnode, *prevnode, *nextnode;
    prevnode = 0;
    currnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currnode->next = prevnode;
        prevnode = currnode;
        currnode = nextnode;
    }
    head = prevnode;
    display();
}
void deleteAtBeginning(){
    printf("Delete element at beginning:\n");
    struct node *q = head;
    head = head->next;
    q->next = 0;
    free(q);
    display();
}
void deleteAtEnd(){
    printf("Delete element at end:\n");
    struct node *temp,*q;
    q = temp = head;
    while (temp->next->next != 0){
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
    else
    {
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
        free(q);
        display();
    }
}

void main()
{
    create();
    printf("\n----------------------------------------------------------------------\n");
    insertAtBeginning();
    printf("\n----------------------------------------------------------------------\n");
    insertAtEnd();
    printf("\n----------------------------------------------------------------------\n");
    insertAtPos();
    printf("\n----------------------------------------------------------------------\n");
    reverseLL();
    printf("\n----------------------------------------------------------------------\n");
    deleteAtBeginning();
    printf("\n----------------------------------------------------------------------\n");
    deleteAtEnd();
    printf("\n----------------------------------------------------------------------\n");
    deleteAtPos();
    printf("\n----------------------------------------------------------------------\n");
}