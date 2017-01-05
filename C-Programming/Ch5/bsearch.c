/**
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>

/* Performs Binary Search & Returns the index of target if found, else -1 */
int bsearch(int arr[], int target, int len);

/**
 * This is the main method.
 */
int main() {
    int arr[] = {1, 3, 5, 7, 9, 13, 17, 18, 19, 22};
    int target = bsearch(arr, 18, 10);
    printf("Target index: %d\n", target);
    return 0;
}
/*
 * Performs Binary Search & Returns the index of target if found, else -1
 */
int bsearch(int arr[], int target, int len) {
    int max, min, center;
    max = len-1;
    min = 0;
    while (min <= max) {
        center = (min+max)/2;
        // Check greater than target
        if (target < arr[center]) {
            max = center - 1;
        }
        // Check less than target
        if (target > arr[center]) {
            min = center + 1;
        }
        // Otherwise we are successful and return!
        else {
            return center;
        }
    }
    return -1;
}
