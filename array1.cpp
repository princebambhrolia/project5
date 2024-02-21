#include <stdio.h>

int main() {
    int a;

   
    printf("Enter the array's size: ");
    scanf("%d", &a);

    int array[a];
  
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < a; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }

    
    printf("\nNegative elements in the array are: ");
    for (int i = 0; i < a; i++) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }
   
}

