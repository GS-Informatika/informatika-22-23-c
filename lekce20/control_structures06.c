#include <stdio.h>

int main()
{
    size_t count;
    scanf("%d", &count); // Nacteni hodnoty ze stdin

    // Pocatecni hodnota i; podminka cyklu; zmena promenne i po kazde iteraci
    for (size_t i = 0; i < count; i++) {
        printf("%d\n", i);
    }

    // Pouze podminka cyklu
    while (count > 0) {
        printf("%d\n", count);
        count = count - 1;
    }
}