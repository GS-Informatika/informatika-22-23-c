#include <stdio.h>
int main()
{
    #define SIZE 5
    int x[SIZE]; // Deklarace pole se SIZE prvky

    int y[] = { 3, 9, 27, 81, 243 }; // Deklarace pole s inicializaci
    int z[5] = {1, 2}; // Deklarace pole s castecnou inicializaci

    for (size_t index = 0; index < SIZE; index++) {
        x[index] = y[index] * 2; // Prirazeni do pole a pristup k prvku pole
    }
}