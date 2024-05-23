#include "calculator.h"

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) { // Renommé la fonction div en divide
    if (b != 0)
        return a / b;
    else
        return 0; // gestion de la division par zéro
}

int car(int x) {
    return x * x;
}
