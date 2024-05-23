#include <stdio.h>

int main() {
    // Current populations
    double populationA = 90000000;
    double populationB = 200000000;

    // Annual growth rates
    double growthRateA = 0.03;
    double growthRateB = 0.02;

    // Year counter
    int year = 0;

    // Loop until population A exceeds population B
    while (populationA < populationB) {
        // Increment the year
        year++;

        // Increase the populations by the growth rate
        populationA += populationA * growthRateA;
        populationB += populationB * growthRateB;
    }

    // Print the result
    printf("It takes %d years for population A to exceed population B.\n", year);

    return 0;
}
