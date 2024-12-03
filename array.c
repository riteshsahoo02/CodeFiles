#include <stdio.h>
void main(){
    int row,col,i,j,sum=0;
    printf("Enter no of rows and cols of a matrix: ");
    scanf("%d %d",&row, &col);

    int arr1[row][col], arr2[row][col], arr3[row][col];
    printf("Enter elements for 1st matrix:\n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            sum += arr1[i][j];
        }
    }
    printf("Sum of elements in array: %d\n",sum);
    printf("Transpose of 1st matrix:\n");
    for (i=0;i<col;i++){
        for (j=0;j<row;j++){
            printf("%d ",arr1[j][i]);
        }
        printf("\n");
    }
    printf("Enter elements for 2nd matrix:\n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        printf("\n");
    }
    printf("Sum of two matrix:\n");
    for (i=0;i<row;i++){
        for (j=0;j<col;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}