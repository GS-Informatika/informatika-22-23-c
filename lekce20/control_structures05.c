int main()
{
    int my_value;
    scanf("%d", &my_value); // Nacteni hodnoty ze stdin

    switch (my_value)
    {
    case 5:
        printf("my_value is 5\n");
        break;
    case 6:
    case 7:
        printf("my_value is 6 or 7\n");
        break;
    default:
        printf("my_value is not 5, 6 or 7\n");
        break;
    }
    return 0;
}