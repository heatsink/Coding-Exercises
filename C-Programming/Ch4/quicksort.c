/**
 * This program is a simple quicksort in C.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
void quicksort(int arr[], int sIndex, int eIndex);
void swap(int arr[], int a, int b);

/**
 * This is the main method. Tests the quicksort algorithm.
 */
int main() {
    int arr[] = {3, 4, 6, 5, 13, 21, 19, 18, 59, 52};
    quicksort(arr, 0, 10); 
    return 0;
}

/*
 * Sorts through specified indices in ascending order using quicksort algorithm
 */
void quicksort(int arr[], int sIndex, int eIndex) {
    int pivot = eIndex;
    int leftHalf, rightHalf;
}

/*
 * Swaps two elements specified in an array
 */
void swap(int arr[], int a, int b) {
    int testA = arr[a];
    int testB = arr[b];
    // Continue
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    if (testA == arr[b] && testB == arr[a]) {
        printf("Successful Swap between indexes %i, %i.\n", a, b);
    }
    else {
        printf("Failed Swap between indexes %i, %i.\n", a, b);
    }
}
