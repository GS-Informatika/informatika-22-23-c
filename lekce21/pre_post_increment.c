#include <stdio.h>
int main() {
    int i = 0;
    while(++i < 3)
        printf("%i", i); //12
    i = 0;
    printf("\n");
    while(i++ < 3)
        printf("%i", i); // 123
}