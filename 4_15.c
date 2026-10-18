#include <stdio.h>
#include <math.h>

int main(void) {
    double principal = 5000.0;
    double rate;
    int year;
    double amount;

    printf("%4s%21s\n", "Year", "Amount on deposit");

    for (rate = 0.10; rate <= 0.12; rate += 0.005) {
        printf("\nInterest rate: %.1f%%\n", rate * 100);
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (year = 1; year <= 15; year++) {
            amount = principal * pow(1.0 + rate, year);
            printf("%4d%21.2f\n", year, amount);
        }
    }

    return 0;
}