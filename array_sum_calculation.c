
#include <stdio.h>

int main() {
int arr[100] , n , i , sum = 0;
    printf("input the number of elements to be stored in the array:");
    scanf("%d", &n);
    printf("input %d elements in the array:\n" , n);
    for(i = 0;i < n; i++){
        printf("element - %d:" ,i);
        scanf("%d" , &arr[i]);
    }
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    printf("Sum of all elements stored in the array is :%d" ,sum);

    return 0;
}
