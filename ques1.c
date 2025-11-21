#include <stdio.h>

int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 1; 
    int b = 2; 
    int c;
    int i;
    for (i = 3; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;  
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Number of ways: %d\n", climbStairs(n));

    return 0;
}

