#define N 7
#include <stdio.h>
#include <stdlib.h>

int top = -1;
int stack[N];

void push(int x){
    // int x;
    // printf("Enter data:");
    // scanf("%d",&x);
    if (top == N-1){
        printf("Overflow\n");
    }
    else{
        top++;
        stack[top] = x;
    }
}
void pop(){
    int item;
    if (top == -1){
        printf("Underflow\n");
    }
    else{
        item = stack[top];
        printf("%d is deleted from stack\n",item);
        top--;
    }
}
void peek(){
    if (top == -1){
        printf("Underflow\n");
    }
    else{
        printf("%d",stack[top]);
    }
}
void display(){
    if (top == -1){
        printf("Stack is empty:(");
    }
    else{
        printf("Elements in stack:\n");
        for (int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
};
void main(){
    push(2);
    push(4);
    push(6);
    push(12);
    push(15);
    push(69);
    push(369);
    display();
    pop();
    pop();
    display();
}