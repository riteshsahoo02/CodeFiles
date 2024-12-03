#include <stdio.h>
void main(){


    int m,n,p,q,i,j,k,sr,sc,sum;
    printf("Enter no of rows and columns for 1st matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements:\n");
    int arr1[m][n];
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for (i=0;i<m;i++){
        sr=0,sc=0;
        for (j=0;j<n;j++){
            sr += arr1[i][j];
            sc += arr1[j][i];
        }
        printf("Sum of elements in row %d is %d:\n",i,sr);
        printf("Sum of elements in column %d is %d:\n",i,sc);
    }

    printf("Enter no of rows and columns for 2nd matrix: ");
    scanf("%d %d",&p,&q);
    printf("Enter elements:\n");
    int arr2[p][q];
    for (i=0;i<p;i++){
        for (j=0;j<q;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int prod[m][q];
    if (n==p){
        for (i=0;i<m;i++){
            for (j=0;j<n;j++){
                sum=0;
                for (k=0;k<n;k++){
                    sum += arr1[i][k] * arr2[k][j];
                }
                prod[i][j] = sum;
            }
        }
    }
    else{
        printf("Invalid command");
    }
    printf("Product of two matrix:\n");
    for (i=0;i<m;i++){
        for (j=0;j<q;j++){
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }

}