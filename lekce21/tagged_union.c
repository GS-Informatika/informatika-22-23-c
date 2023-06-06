#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
enum Tag
{
    Integer,
    String
};

struct String {
    char *str;
    size_t length;
};

union IntegerOrString_U {
    struct String s;
    int i;
};

struct IntegerOrString {
    union IntegerOrString_U value;
    enum Tag tag;
};

int main() {
    char buffer[16];
    scanf("%16s", buffer);
    short is_digit = 1;
    int read = strlen(buffer);
    for (int i = 0; i < read; i++)
    {
        if (!isdigit(buffer[i])) {
            is_digit = 0;
            break;
        }
    }
    union IntegerOrString_U uni;
    struct IntegerOrString i;
    if (is_digit) {
        uni.i = atoi(buffer);
        i.tag = Integer;
        i.value = uni;
    }
    else {
        char str[read];
        // Copy without the null terminators
        for (int i = 0; i < read; i++) {
            str[i] = buffer[i];
        }
        struct String s = {str, read};
        uni.s = s;
        i.tag = String;
        i.value = uni;
    }

    printf("%i", i.tag);
}