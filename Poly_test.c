#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coeff;
    int expo;
    struct node *next;
};
struct node *head1;
struct node *head2;
struct node *head;
int poly;

void display(struct node *head)
{
    struct node *temp;
    temp = head;
    while (temp != 0)
    {
        printf("%dx^%d", temp->coeff, temp->expo);
        temp = temp->next;
        if (temp != 0)
        {
            printf("+");
        }
        else
        {
            printf("\n");
        }
    }
}
void create()
{
    head1 = head2 = 0;
    
    struct node *newnode, *temp;
    printf("Enter no. of terms for the polynomial:");
    scanf("%d", &poly);
    if (poly == 0)
    {
        printf("Invalid Polynomial");
    }
    else
    {
        int i = 1;
        while (i <= poly)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter coeff:");
            scanf("%d", &newnode->coeff);
            printf("Enter expo:");
            scanf("%d", &newnode->expo);
            newnode->next = 0;
            if (head1 == 0)
            {
                head1 = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            i++;
        }
        display(head1);
        i = 1;
        printf("\nEnter values for second Polynomial:\n");
        while (i <= poly)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Enter coeff:");
            scanf("%d", &newnode->coeff);
            printf("Enter expo:");
            scanf("%d", &newnode->expo);
            newnode->next = 0;
            if (head2 == 0)
            {
                head2 = temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            i++;
        }
    }
    display(head2);
}
void opPoly(char op){
    if (op == '+')
        printf("Addition on two polynomials:\n");
    else if (op == '-')
        printf("Subtraction on two polynomial:\n");
    struct node *ptr1,*ptr2,*temp;
    struct node *newnode;
    head = 0;
    ptr1 = head1;
    ptr2 = head2;
    temp = head;
    while (ptr1 != 0 || ptr2 != 0){
        if(ptr1->expo == ptr2->expo){
            newnode = (struct node *)malloc(sizeof(struct node));
            if (op == '+'){
                newnode->coeff = ptr1->coeff + ptr2->coeff;
            }
            else if (op == '-'){
                if (ptr1->expo >= ptr2->expo){
                    newnode->coeff = ptr1->coeff - ptr2->coeff;
                }
                else if(ptr2->expo > ptr1->expo){
                    newnode->coeff = -(ptr1->coeff - ptr2->coeff);
                }
            }
            newnode->expo  = ptr1->expo;
            newnode->next = 0;
            if (head == 0)
            {
                head= temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    display(head);
}
void mulPoly(){
    struct node *ptr1,*ptr2,*temp;
    struct node *newnode;
    printf("\n --------------Multiplication of two Polynomial:----------------\n");
    head = 0;
    ptr1 = head1;
    ptr2 = head2;
    temp = head;
    int res1, res2;
    while (ptr1 != 0){
        ptr2 = head2;
        while (ptr2 != 0){
            res1 = ptr1->coeff * ptr2->coeff;
            res2 = ptr1->expo + ptr2->expo;
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->coeff = res1;
            newnode->expo  = res2;
            newnode->next = 0;
            if (head == 0)
            {
                head= temp = newnode;
            }
            else
            {
                temp->next = newnode;
                temp = newnode;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    display(head);
}
void main(){
    create();
    opPoly('+');
    opPoly('-');
    mulPoly();
}
