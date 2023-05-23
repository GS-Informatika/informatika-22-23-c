void print_probability(int num_dice, int min_number_count)
{
    /* Zavedeni promenne prob typu float a ulozeni hodnoty kterou vraci fce probability */
    float prob = probability(num_dice, min_number_count);
    printf("\nPravdepodobnost je: %f\n", prob); /* Vypsani hodnoty ulozene v promenne prob */
    /* Nevracime nic! */
}