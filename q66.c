/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);
    
    int arr[n + 1]; // Extra space for the new element
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int new_element;
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);
    
    int i;
    // Find the position to insert the new element
    for (i = n - 1; (i >= 0 && arr[i] > new_element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    
    arr[i + 1] = new_element; // Insert the new element
    
    printf("Array after insertion: ");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    
    return 0;
}