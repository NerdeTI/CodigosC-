#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int userNumber;
    printf("Enter a number: ");
    scanf("%d", &userNumber);
    if (isPrime(userNumber)) {
        printf("%d is a prime number.\n", userNumber);
    } else {
        printf("%d is not a prime number.\n", userNumber);
    }
    return 0;
}
