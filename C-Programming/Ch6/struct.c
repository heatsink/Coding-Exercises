/**
 * This program is just simple practice for a struct.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXLEN 100
void copyString(char *to, char *from);

/*
 * This is the structure of a dog.
 */
struct dog {
    int legs;
    char name[MAXLEN];
    char breed[MAXLEN];
};

/**
 * This is the main method.
 */
int main() {
    struct dog doggo;
    char name[] = "Lucy";
    copyString(doggo.name, name);
    printf("Doggo's name: %s\n", doggo.name);
     
    return 0;
}
void copyString(char *to, char *from) {
    while ((*to++=*from++) != '\0')
        ;
}
