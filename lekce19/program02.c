#include <stdio.h> /* odkaz na hlavickovy soubor */
#define NUMBER 5 /* symbolicka konstanta - makro */

int compute(int a); /* deklarace funkce (hlavicka/prototyp) */
/* Funkce bere jeden argument typu "int" a vraci hodnotu typu "int" */

int main(int argc, char *argv[])
{ /* main funkce */
    int v = 10; /* deklarace promenne */
    int r;
    r = compute(v); /* volani funkce */
    return 0; /* konec main funkce - vraci hodnotu 0 */
}

int compute(int a)
{ /* implementace deklarovane funkce (definice) */
    int b = 10 + a; /* telo funkce (body) */
    return b; /* funkce vraci hodnotu 'b' */
}
