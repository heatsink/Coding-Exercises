// Write a program that reads a set of text lines and prints the longest.
#include <stdio.h>
#define MAXLINE 1000
int getLine(char[], int);
void cpLine(char[], char[], int);
int main() {
    char storage[MAXLINE];
    char current[MAXLINE];
    int cur;
    int max;

	// Read lines until EOF
    while ((cur = getLine(current, MAXLINE)) > 0) {
		// Compare line length?
        if (cur > max) {
			// Save length if bigger
			// Stores the line
            max = cur;
            cpLine(storage, current, MAXLINE);
        }
    }
	// Print biggest line
    printf("\n***Longest String***\n%s\n\n", storage);
	return 0;
}
// Return the length of the line
int getLine(char current[], int lim) {
    int i;
    int cur;
    for(i = 0; i < lim-1 && (cur=getchar())!= EOF && cur != '\n'; i++) {
        current[i] = cur;
    }
    if (cur == '\n') {
        current[i] = '\n';
        i++;
    }
    current[i] = '\0';
	return i;
}

// Stores the line
void cpLine(char storage[], char current[], int lim) {
    int i;
    i = 0;
    while ((storage[i] = current[i]) != '\0') {
        i++;
    }
}
