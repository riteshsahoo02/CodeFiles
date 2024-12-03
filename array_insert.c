#include <stdio.h>
void main(){
    int arr[20],size,i,idx,num;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter elements: ");
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements in array are: ");
    for (i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter index of the array and num to be inserted:  ");
    scanf("%d %d",&idx,&num);
    for (i=size-1; i>=idx;i--){
        arr[i+1] = arr[i];
    }
    arr[idx] = num;
    size++;
    printf("Elements in array after insertion: ");
    for (i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\nEnter index of the array to be deleted:  ");
    scanf("%d",&idx);
    for (i=idx; i<size-1;i++){
        arr[i] = arr[i+1];
    }
    size--;
    printf("Elements in array after deletion: ");
    for (i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}