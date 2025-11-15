/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int position;
    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &position);
    
    // Shift elements to the left to delete the element at the given position
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    printf("Array after deletion: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}