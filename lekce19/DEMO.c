#include <stdio.h>

float probability(int num_dice, int min_number_count);
void print_probability(int num_dice, int min_number_count);

int main() 
{
    int num_dice; /* Stejne jako funkce muzeme deklarovat i promenne */
    int min_number_count; /* Tim "zavedeme" jejich jmeno, ale jeste nemaji prirazenou hodnotu */
    printf("Zadejte pocet kostek: ");
    scanf("%d", &num_dice); /* "Pointer magic" - zatim neresime */
    printf("\nZadejte pocet kostek s hledanou hodnotou: ");
    scanf("%d", &min_number_count); /* Dalsi pointer magic */

    print_probability(num_dice, min_number_count); /* Volani funkce print_probability */
      
    return 0;
}

void print_probability(int num_dice, int min_number_count)
{
    /* Zavedeni promenne prob typu float a ulozeni hodnoty kterou vraci fce probability */
    float prob = probability(num_dice, min_number_count);
    printf("\nPravdepodobnost je: %f\n", prob); /* Vypsani hodnoty ulozene v promenne prob */  
}

float probability(int num_dice, int min_number_count) 
{
    float one_dice_prob = 1.0 / 6.0; /* Zavedeni promenne one_dice_prob typu float */
    float prob = one_dice_prob * min_number_count; /* Zavedeni promenne prob */
    return prob; /* Vraceni hodnoty ulozene v promenne prob */
}