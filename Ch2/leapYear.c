/**
 * a year is a leap year if it is divisible by 4 but not by 100, except that 
 * years divisible by 400 are leap years.
 * @author Sean Wallace
 * @version 1
 */
#include <stdio.h>
#define MAXTEST 1500
typedef int bool;
enum bool { false, true };
bool isLeapYear(int year);

/**
 * This is the main method.
 */
int main() {
    // Test
    int i;
    for (i = 0; i < MAXTEST; i+=10) {
        if (isLeapYear(i) == true) {
            printf("%d: Yay! Leap Year!\n", i);
        }
        else {
            printf("%d: Boo.\n", i);
        }
    }
    return 0;
}
bool isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}
