#include <stdio.h>
int main() {
    int c, lineCount;
    char test = 'A';
    int testInt = 66;
    //c = getchar();
    while (c != EOF) {
        //putchar(c);
        c = getchar();
        if (c == '\n') {
            lineCount++;
        }
    }
    printf("Found EOF. Exiting While Loop.\n");
    printf("You have inputted %d lines\n", lineCount);
    printf("%d\n", test);
    printf("%c\n", testInt);
    printf("%d\n", (char) testInt);
    printf("%d\n", 4+'\n');
    return 0;
}
