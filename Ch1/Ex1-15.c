// Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>
float convertF(int);
int main() {
    int fahrenheit;
    for (fahrenheit = 0; fahrenheit <= 200; fahrenheit+=10) {
        printf("%3d F%8.2f C\n", fahrenheit, convertF(fahrenheit));
    }
    return 0;
}
float convertF(int F) {
    // (Constant) * (F-32)
    return 5.0/9.0*(F-32);
}
