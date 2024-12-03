
// --------------------- Linear Search -------------------------------------
// #include <stdio.h>
// void main(){
//     int arr[] = {15, 5, 20, 35, 2, 42, 67, 17};
//     int target = 35;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int i;
//     for (i=0; i<size; i++){
//         if (arr[i] == target){
//             printf("Element %d found at index %d",arr[i],i);
//             break;
//         }
//     }
//     if (i == size)
//        printf("Element %d is not present");
// }

// ------------------------------------ Binary Search -----------------------------
// #include <stdio.h>
// void main(){
//     int arr[] = {5, 9, 17,23, 25, 45, 59, 63, 71, 89};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int low,high,mid;
//     int target = 45;
//     low = 0;
//     high = size-1;
//     while (low < high){
//         mid = (high + low)/2;
//         if (target == arr[mid]){
//             printf("Element found at index %d",mid);
//             break;
//         }
//         else if(target < arr[mid]){
//             high = mid-1;
//         }
//         else{
//             low = mid +1;
//         }
//     }
//     if (low > high){
//         printf("%d is not present",target);
//     }
// }

// -------------------------- Bubble Sort ----------------
// #include <stdio.h>
// void main(){
//     int arr[] = {15, 16, 6, 8, 5};
//     int temp,flag;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i=0; i < size-1;i++){
//         flag = 0;
//         for (int j=0; j<size-1-i; j++){
//             if (arr[j] > arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//                 flag = 1;
//             }
//         }
//         if (flag == 0)
//             break;
//     }
//     printf("Array after Bubble sort:\n");
//     for (int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

// -------------------------- Insertion Sort --------------------
// #include <stdio.h>
// void main(){
//     int arr[] = {5, 4, 10, 1, 6, 2};
//     int temp,j;
//     int size = sizeof(arr) / sizeof(arr[0]);
//     for (int i = 1;i<size;i++){
//         temp = arr[i];
//         j = i - 1;
//         while (j>=0 && arr[j]>temp){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = temp;
//     }
//     printf("Array after Insertion sort:\n");
//     for (int i=0;i<size;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }

// ------------------------- Selection Sort ----------------

#include <stdio.h>
void main(){
    
}