#include <stdio.h>
union IntOrChar {
    int integer;
    char character;
};

int main() {
    union IntOrChar u;
    u.integer = 32;
    u.character = 'A';
    printf("%i\n", u.integer); // 65 - corrupted
    printf("%c\n", u.character);  // A
}