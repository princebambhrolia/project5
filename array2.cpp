#include <stdio.h>

int main() {
    int a, b;
  
    printf("Enter the array's row size: ");
    scanf("%d", &a);

    printf("Enter the array's column size: ");
    scanf("%d", &b);
  
    int array[a][b];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int largest = array[0][0];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }
 
    printf("\nThe largest element in the array is: %d\n", largest);
   
}
