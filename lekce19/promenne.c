#include <stdio.h>

int main()
{
    int integer1; /* Deklarace */
    integer1 = 5; /* Inicializace (prirazeni) */
    int integer2 = 10; /* Deklarace a inicializace */
    int integer3, integer4 = 20; /* Deklarace a inicializace */
    integer2 = 400; /* Reassignment */
    
    integer3 = integer1 + integer2 + integer3 + integer4; /* Reassignment */
    return 0;
}