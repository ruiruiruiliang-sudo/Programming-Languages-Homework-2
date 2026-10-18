#include <stdio.h>

int main(void) {
    int side1, side2, hypotenuse;

    printf("Pythagorean triples with sides ≤ 500:\n\n");
    printf("%6s %6s %11s\n", "Side1", "Side2", "Hypotenuse");

    for (side1 = 1; side1 <= 500; side1++) {
        for (side2 = side1; side2 <= 500; side2++) {  // side2 >= side1 避免重複
            for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("%6d %6d %11d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}