#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort (ascending order)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int list[] = {5, 2, 9, 1, 5, 6, 3, 4, 0, 7, 8};
    int size = sizeof(list) / sizeof(list[0]);

    // Sort the list in ascending order
    qsort(list, size, sizeof(int), compare);

    // Print the sorted list
    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    printf("\n");

    return 0;
}
