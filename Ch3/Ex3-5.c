/**
 * This program fulfils Exercise 3-5.
 * Write the function itob(n,s,b) that converts the integer n into a base b
 * character representation in the string s. In particular, itob(n,s,16) 
 * formats s as a hexadecimal integer in s.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#include <string.h>
#define MAXLEN 1000
void itob(int n, char s[], int b);

/**
 * This is the main method.
 */
int main() {
    char s[MAXLEN]; 
    int n = 11;
    int b = 2;
    itob(n, s, b);
    printf("%d in base %d --> %s\n", n, b, s);
    n = 74;
    b = 16;
    itob(n, s, b);
    printf("%d in base %d --> %s\n", n, b, s);
    n = 80;
    b = 3;
    itob(n, s, b);
    printf("%d in base %d --> %s\n", n, b, s);
    return 0;
}

/**
 * Converts an integer into specified base in string.
 * int number to be converted
 * char s[] to occupy string
 * base to convert number to
 */
void itob(int n, char s[], int b) {
    memset(s, 0, MAXLEN);
    int offer = 0;
    int i = 0;
    while (n > 0) {
        offer = n%b;
        switch (offer) {
            case 15:
                offer = 'F';
                break;
            case 14:
                offer = 'E';
                break;
            case 13:
                offer = 'D';
                break;
            case 12:
                offer = 'C';
                break;
            case 11:
                offer = 'B';
                break;
            case 10:
                offer = 'A';
                break;
            default:
                offer += '0';
        }
        s[i] = offer;
        n/=b;
        i++;
    }
    // Reverse the string using XOR magic :D
    int j = 0;
    for (j = 0, i--; j < i; i--, j++) {
        s[j] ^= s[i];
        s[i] ^= s[j];
        s[j] ^= s[i];
    }
}
