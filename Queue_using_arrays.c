#define N 5
#include <stdio.h>
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x){
    if (rear == N-1){ 
        printf("Overflow");
    }
    else if(front == -1 && rear == -1){
        front = rear = 0;
        queue[rear] = x;
    }
    else{
        rear++;
        queue[rear] = x;
    }
}
void dequeue(){
    if (front == -1 && rear == -1){
        printf("Underflow");
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        printf("%d gets removed from queue\n",queue[front]);
        front++;
    }
}
void display(){
    int i;
    if (front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        printf("Elements in queue :\n");
        for (i=front;i<rear+1;i++){
            printf("%d ",queue[i]);
        }
    }
}
void peek(){
    if (front == -1 && rear == -1){
        printf("Queue is empty");
    }
    else{
        printf("Element at first in queue is  %d\n",queue[front]);
    }
}
void main(){
    printf("Queue is created\n");
    enqueue(9);
    enqueue(13);
    enqueue(23);
    enqueue(16);
    enqueue(25);
    printf("-------------------------------------\n");
    display();
    printf("-------------------------------------\n");
    peek();
    dequeue();
    display();
}