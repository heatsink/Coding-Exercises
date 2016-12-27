#include <stdio.h>
#define CELSIUS 0
#define FAHRENHEIT 0
#define MAX 100
#define SMALL 420
#define LARGE 42000000
int main() {
    float celsius = CELSIUS;
    int fahrenheit = FAHRENHEIT;
    int max = MAX;
    int small = SMALL;
    int large = LARGE;
    printf("fahrenheit\tcelsius\n");
    while (celsius < max) {
        fahrenheit++;
        celsius = (5.0/9)*(fahrenheit - 32);
        printf("%3d F%17.2f C\n", fahrenheit, celsius);
    }
    
    printf("Small: %d\n", small);
    printf("Small: %6d\n", small);
    printf("Large: %d\n", large);
    printf("Large: %6d\n", large);
    return 0;
}
