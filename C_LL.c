#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;
void display(){
    struct node *temp;
    temp = head;
    int count = 0;
    while (temp->next != head){
        printf("%d ",temp->data);
        temp = temp->next;
        count++;
    }
    printf("length of linked list is %d\n",count);
}
void createLL(){
    printf("Creating Linked List:\n");
    head = 0;
    int choice = 1;
    while (choice){
        struct node *newnode,*temp;
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head == 0){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        temp->next = head;
        printf("Do you want to continue Press(0 or 1): ");
        scanf("%d",&choice);
    }
    display();
}