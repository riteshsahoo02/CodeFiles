#include <stdio.h>
#include <stdlib.h>

struct Node
{
    float coeff;
    int expo;
    struct Node *link;
};

struct Node *insert(struct Node *head, float C, int ex)
{
    struct Node *temp;
    struct Node *newP = malloc(sizeof(struct Node));
    newP->coeff = C;
    newP->expo = ex;
    newP->link = NULL;

    if (head == NULL || ex > head->expo)
    {
        newP->link = head;
        head = newP;
    }
    else
    {
        temp = head;
        while (temp->link != NULL && temp->link->expo >= ex)
        {
            temp = temp->link;
            newP->link = temp->link;
            temp->link = newP;
        }
    }
    return head;
};
void print(struct Node *head)
{
    if (head == NULL)
    {
        printf("No Polynomial");
    }
    else
    {
        struct Node *temp = head;
        while (temp != NULL)
        {
            printf("(%.1fx^%d)", temp->coeff, temp->expo);
            temp = temp->link;
            if (temp != NULL)
            {
                printf("+");
            }
            else
            {
                printf("\n");
            }
        }
    }
}
struct Node *create(struct Node *head)
{
    int n, i;
    float coeff;
    int expo;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the coeff for term %d:", i + 1);
        scanf("%f", &coeff);
        printf("Enter exponent for term %d:", i + 1);
        scanf("%d", &expo);
        head = insert(head, coeff, expo);
    }
    return head;
}
int main()
{
    struct Node *head = NULL;
    printf("Enter the Polynomial:\n");
    head = create(head);
    print(head);
    return 0;
}