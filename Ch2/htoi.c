/**
 * This program fulfils Exercise 2-3.
 * Write a function htoi(s), which converts a string of hexadecimal digits
 * (including an optional 0x or 0X) into its equivalent integer value. The 
 * allowable digits are 0 through 9, a through f, and A through F.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int htoi(char arr[]);
int power16(int num);
/**
 * This is the main method.
 */
int main() {
    char hexNum[] = "0xFFF";     
    printf("0xFF = %d\n", htoi(hexNum));
    char hexNum2[] = "0xFE";     
    printf("0xFE = %d\n", htoi(hexNum2));
    char hexNum3[] = "0x16";     
    printf("0x16 = %d\n", htoi(hexNum3));
    char hexNum4[] = "0x1A";     
    printf("0x1A = %d\n", htoi(hexNum4));
    char hexNum5[] = "0x0A";     
    printf("0x0A = %d\n", htoi(hexNum5));
    char hexNum6[] = "0x12";     
    printf("0x12 = %d\n", htoi(hexNum6));
    return 0;
}
int htoi(char arr[]) {
    int i;
    int n;
    int temp;
    int digit;
    n = 0;
    digit = 0;
    temp = 0;
    for (i = strlen(arr) - 1; i > 1; i--) {
        if(isdigit(arr[i])) { // 0-9
            temp = arr[i] - '0';
        }
        else if (arr[i] >= 'A' && arr[i] <= 'F'){ // A-F
            temp = arr[i] - 'A' + 10;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'f') { // a-f
            temp = arr[i] - 'a' + 10;
        }
        else {
            printf("ERR: NAN.\n");
        }
        n += temp*(power16(digit));
        digit++;
    }
    return n;
}
int power16(int digit) {
    int i;
    int n;
    n = 16;
    if (digit == 0) {
        return 1;
    }
    for (i = 1; i < digit; i++) {
        n*=16;
    }
    return n;
}
