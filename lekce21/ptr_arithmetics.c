#include <stdio.h>
// Promenne urcujici ktere vypocty provest
short cmp1 = 1, cmp2 = 1, cmp3 = 1;

int compute1() {return 1;}
int compute2() {return 2;}
int compute3() {return 3;}

int main() {
    long results[3];
    long* head = results;
    if (cmp1) *head++ = compute1();
    if (cmp2) *head++ = compute2();
    if (cmp3) *head++ = compute3();
    // Ukazuje na zacatek array
    long* tail = results;
    while(tail < head) {
        printf("%ld\n", *tail);
        tail++;
    }
}