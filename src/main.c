#include <stdio.h>
#include "calculator.h"

int main() {
    int result = car(5);
    printf("The square of 5 is: %d\n", result);

    result = divide(10, 2); // Renommer l'appel à la fonction div en divide
    printf("10 divided by 2 is: %d\n", result);

    return 0;
}
