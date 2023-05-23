float probability(int num_dice, int min_number_count) 
{
    float one_dice_prob = 1.0 / 6.0; /* Zavedeni promenne one_dice_prob typu float */
    float prob = one_dice_prob * min_number_count; /* Zavedeni promenne prob */
    return prob; /* Vraceni hodnoty ulozene v promenne prob */
}