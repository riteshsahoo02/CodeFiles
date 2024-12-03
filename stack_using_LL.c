#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void display()
{
    struct node *temp;
    temp = top;
    printf("Elements in stack are:\n");
    if (top == 0)
    {
        printf("Stack is Empty");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0){
        printf("Underflow\n");
    }
    else{
        printf(" %d gets popped\n",top->data);
        top = top->next;
        free(temp);
    }
}
void peek(){
    if (top == 0){
        printf("Stack is Empty");
    }else{
        printf("Top element is %d\n",top->data);
    }
}
void main()
{
    push(5);
    push(7);
    push(13);
    push(10);
    push(12);
    push(11);
    display();
    peek();
    pop();
    pop();
    pop();
    display();
}