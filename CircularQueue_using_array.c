#define N 6
#include <stdio.h>
int queue[N];
int front = -1;
int rear = - 1;

void enqueue(int x){
    if (front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else if(((rear+1)%N) == front){
        printf("Queue is full\n");
    }
    else{
        rear = (rear+1)%N;
        queue[rear] = x;
    }
}
void dequeue(){
    if (front == -1 && rear == -1){
        printf("Underflow\n");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("\nElement deleted: %d",queue[front]);
        front = (front+1)%N;
    }
}
void display(){
    int i = front;
    if (front == -1 && rear == -1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is:\n");
        while(i != rear){
            printf("%d ",queue[i]);
            i = (i+1)%N;
        }
    }
}
void main(){
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(8);
    enqueue(13);
    display();
    dequeue();
}