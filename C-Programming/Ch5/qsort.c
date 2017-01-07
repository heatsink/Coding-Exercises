/**
 * Basic quicksort in C for complex char elements using pointers.
 * @author K&R
 * @version 1
 */
#include <stdio.h>
#include <string.h>
void qsort(char *arr[], int left, int right);
void swap(char *arr[], int a, int b);
void formTests(void);

/**
 * This is the main method.
 */
int main() {
    char *tests[] = {
    "KK",  "LL",  "MM",  "NN",  "OO",  "PP",  "QQ",  "RR",  "SS",  "TT",
    "AA",  "BB",  "CC",  "DD",  "EE",  "FF",  "GG",  "HH",  "II",  "JJ" 
    };
    qsort(tests, 0, 19);
    int i = 0;
    for (i = 0; i < 19; i++) {
        printf("%s%c", tests[i], (i%10==9 || i == 20) ? '\n' : ' ');
    }
     
    return 0;
}
void qsort(char *arr[], int left, int right) {
    int i, last;
    if (left >= right) {
        return;
    }
    swap(arr, left, (left+right)/2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (strcmp(arr[i], arr[left]) < 0) {
            swap(arr, ++last, left);
        }
    }
    swap(arr, left, right);
    qsort(arr, left, last -1);
    qsort(arr, last + 1, right);
}
void swap(char *arr[], int a, int b) {
    char *temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
void formTests(void) {
    int i;
    for (i = 0; i < 30; i++) {
        printf("%c%c%s%c", '\"', i + 'A', "\", ", ((i%10==9) || (i==100)) ? '\n' : ' ');
    }
}
