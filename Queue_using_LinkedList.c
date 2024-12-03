#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front = 0;
struct node *rear = 0;
void enqueue(int x){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front==0 && rear == 0){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = rear->next;
    }
}
void display(){
    struct node *temp;
    printf("Element in Queues are:\n");
    if (front == 0 && rear == 0){
        printf("Queue is empty");
    }
    else{
        temp = front;
        while (temp != 0){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void dequeue(){
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0){
        printf("Queue is empty");
    }
    else{
        printf("Element deleted :%d\n",temp->data);
        front = front->next;
        free(temp);
    }
}
void peek(){
    if (front == 0 && rear == 0){
        printf("Queue is empty");
    }
    else{
        printf("Element at front %d\n",front->data);
    }
}

void main(){
    enqueue(5);
    enqueue(30);
    enqueue(-3);
    enqueue(50);
    enqueue(-33);
    display();
    dequeue();
    peek();
}