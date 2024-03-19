/* 8. Write a program to accept a number and print its prime factors.
Input: 180
Output: 180 = 2 * 2 * 3 * 3 * 5  */


#include <stdio.h>

void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // n must be odd at this point. So we can skip one element (i = i + 2)
    for (int i = 3; i * i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2)
        printf("%d ", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Prime factors of %d are: ", num);
    primeFactors(num);
    return 0;
}



