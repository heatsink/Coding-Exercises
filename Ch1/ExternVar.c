// Write a program that reads a set of text lines and prints the longest.
// Rewrite the longest-line program with line, longest, and max as external 
// variables. This requires changing the calls, declarations, and bodies of 
// all three functions
#include <stdio.h>
#define MAXLINE 1000
int getLine();
void cpLine();
    char storage[MAXLINE];
    char current[MAXLINE];
    int max;
int main() {
    int cur;
    extern int max;
    extern char storage[];

	// Read lines until EOF
    while ((cur = getLine()) > 0) {
		// Compare line length?
        if (cur > max) {
			// Save length if bigger
			// Stores the line
            max = cur;
            cpLine();
        }
    }
	// Print biggest line
    printf("\n***Longest String***\n%s\n\n", storage);
	return 0;
}
// Return the length of the line
int getLine(void) {
    int i;
    int cur;
    extern char current[];
    for(i = 0; i < MAXLINE-1 && (cur=getchar())!= EOF && cur != '\n'; i++) {
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
void cpLine(void) {
extern char storage[];
extern char current[]; 
    int i;
    i = 0;
    while ((storage[i] = current[i]) != '\0') {
        i++;
    }
}
