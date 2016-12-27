#include <stdio.h>
int main() {
    printf("2^3: %d\n", power(2,3)); 
    printf("3^4: %d\n", power(3,4)); 
    printf("-3^4: %d\n", power(-3,4)); 
    printf("-3^5: %d\n", power(-3,5)); 
    int i, j;
    for (i = -3; i < 3; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d^%d: %d\n", i, j, power(i, j));
        }
    }
    return 0;
    
}
int power(int m, int n) {
    int ans = m;
    int i;
    for (i = n-1; i > 0; i--) {
        ans *= m;
    }
    return ans;
}
