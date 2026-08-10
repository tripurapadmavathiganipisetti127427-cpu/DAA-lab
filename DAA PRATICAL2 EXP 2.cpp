#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int key = 30;
    int i, found = -1;

    // Linear Search Algorithm
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }

    // Output
    if(found != -1)
        printf("Element found at index %d\n", found);
    else
        printf("Element not found\n");

    // Time Complexity in Output
    printf("Time Complexity: O(n)\n");

    return 0;
}