#include <stdlib.h>
int main() {
    int *ptr = NULL; // Deklarovano, zatim nemame vyhrazenou pamet
    int x = 5;
    ptr = &x; // Teprve nyni pointer ukazuje na l-value
}