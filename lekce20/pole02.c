#include <stdlib.h>
int sum(int arr[], size_t array_size)
{
    int sum = 0;
    for (size_t i = 0; i < array_size; i++) {
        sum += arr[i];
    }
    return sum;
}