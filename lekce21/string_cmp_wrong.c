#include <stdio.h>
int main() {
    char buffer1[64];
    char buffer2[64];

    scanf("%s", buffer1);
    scanf("%s", buffer2);
    
    printf("%i", buffer1 == buffer2); // Neporovnava stringy!
}