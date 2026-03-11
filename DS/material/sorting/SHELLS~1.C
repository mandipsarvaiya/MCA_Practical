#include <stdio.h>
#include <conio.h>
// Swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Modified Shell Sort using compare and swap
void shellSort(int arr[], int n) {
    int gap,i,j;
    for (gap = n / 2; gap > 0; gap /= 2) {
	for (j = gap; j < n; j++) {
	    for (i = j - gap; i >= 0; i -= gap) {
                if (arr[i + gap] > arr[i]) {
                    break; // Already in correct order
                } else {
                    swap(&arr[i + gap], &arr[i]); // Swap if not in order
                }
            }
        }
    }
}

// Function to print array
void printArray(int arr[], int n) {
    int k;
    for (k = 0; k < n; k++)
        printf("%d ", arr[k]);
    printf("\n");
}

// Main function
int main() {
    int arr[] = {23, 12, 1, 8, 34, 54, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    clrscr();
    printf("Original array:\n");
    printArray(arr, n);

    shellSort(arr, n);

    printf("Sorted array:\n");
    printArray(arr, n);

    getch();
    return 0;
}
