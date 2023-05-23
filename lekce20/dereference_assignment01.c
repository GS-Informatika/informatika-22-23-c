#include <stdio.h>

void swap(int *a, int *b) {
    int tmp = *a; // dereference do nove promenne (copy)
    *a = *b; // prirazeni hodnoty na lokaci b do lokace a
    *b = tmp; // prirazeni hodnoty tmp do lokace b
}

int main() {
    int x = 10;
    int y = 20;
    swap(&x, &y); // do funkce posilame pointery (adresy)
    printf("%d\n", x); // 20
    printf("%d\n", y); // 10
}