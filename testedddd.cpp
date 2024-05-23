#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num % 2 == 0 && num > 2) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 5000; i <= 7000; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
