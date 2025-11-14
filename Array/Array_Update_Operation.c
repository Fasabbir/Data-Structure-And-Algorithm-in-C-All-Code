#include <stdio.h>

int main() {
    int arr[100], n, pos, newValue;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and new value
    printf("Enter the position (index) to update: ");
    scanf("%d", &pos);

    // Check for valid index
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Update the array element
    arr[pos] = newValue;

    // Print updated array
    printf("Array after update: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
