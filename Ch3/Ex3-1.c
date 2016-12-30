/**
 * This program fulfils Exercise 3-1.
 * Our binary search makes two tests inside the loop, when one would suffice (at
 * the price of more tests outside.) Write a version with only one test inside 
 * the loop and measure the difference in run-time.
 *
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define ARR_SIZE 100
int binarySearch(int arr[], int search, int size);
/**
 * This is the main method.
 */
int main() {
    int i;
    int j = -32;
    printf("Test Case.\n");
    for (i = 0; i < 100; i++) {
        j+=3;
        printf("%3d,%c", j, (i%10==9) ? '\n' : ' ');
    }
    int arr[] = 
    {
        -29, -26, -23, -20, -17, -14, -11,  -8,  -5,  -2,
          1,   4,   7,  10,  13,  16,  19,  22,  25,  28,
         31,  34,  37,  40,  43,  46,  49,  52,  55,  58,
         61,  64,  67,  70,  73,  76,  79,  82,  85,  88,
         91,  94,  97, 100, 103, 106, 109, 112, 115, 118,
        121, 124, 127, 130, 133, 136, 139, 142, 145, 148,
        151, 154, 157, 160, 163, 166, 169, 172, 175, 178,
        181, 184, 187, 190, 193, 196, 199, 202, 205, 208,
        211, 214, 217, 220, 223, 226, 229, 232, 235, 238,
        241, 244, 247, 250, 253, 256, 259, 262, 265, 268
    };
    int search;
    int index;
    for (search = -30; search < 270; search++) {
        index = binarySearch(arr, search, ARR_SIZE);
        printf("#%d found? i:%d\n", search, index);
    }
    return 0;
}
int binarySearch(int arr[], int search, int size) 
{
    int min = 0;
    int max = size - 1; // Arrays are 0 indexed
    int center;
    center = (min + max)/2;
    while (min < max && arr[center] != search) {
        // Less?
        if (search < arr[center]) {
            max = center - 1;
        }
        else {
            min = center + 1;
        }
        center = (min + max)/2;
    }
    if (arr[center] == search) {
        return center;
    }
    return -1;
}
