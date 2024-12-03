#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void main()
{
    struct Node *head, *newnode, *temp;
    head = 0;
    int choice = 1;
    while (choice == 1)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
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
        printf("Do you want to continue press (0 or 1): ");
        scanf("%d", &choice);
    }
    temp = head;
    int count = 0;
    printf("Elements in Linked List are: \n");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nLength of linked list is %d", count);

    printf("x----------------------------------------------------------------x\n");
    printf("Insert at beginning \n");
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;

    temp = head;
    count = 0;
    printf("Linked List after insert at beginning: \n");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nLength of linked list is %d\n", count);
    printf("x----------------------------------------------------------------x\n");
    printf("Insert at end:\n");
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp->next = newnode;

    temp = head;
    count = 0;
    printf("Linked List after insertion at end: \n");
    while (temp != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\nLength of linked list is %d\n", count);

    printf("x----------------------------------------------------------------x\n");

    printf("Insert at any loc:-\n");
    temp = head;
    int pos, i = 1;
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("Position is out of index");
    }
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;

        temp = head;
        count = 0;
        printf("\nLinked List after insertion at any loc: \n");
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
            count++;
        }
        printf("\nLength of linked list is %d\n", count);
    }

    printf("\nx----------------------------------------------------------------x\n");
    printf("Reverse Linked List: \n");
    struct Node *currentnode, *prevnode, *nextnode;
    currentnode = nextnode = head;
    prevnode = 0;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    struct Node *newTemp;
    newTemp = head;
    count = 0;
    printf("\nLinked List after reversal: \n");
    while (newTemp != 0)
    {
        printf("%d ", newTemp->data);
        newTemp = newTemp->next;
        count++;
    }
    printf("\nLength of linked list is %d\n", count);
}