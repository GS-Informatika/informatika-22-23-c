#include <stdio.h>
struct Point {
    int x, y;
};

void set_x_wrong(struct Point pt, int new_x) {
    pt.x = new_x;
}

void set_x(struct Point *pt, int new_x) {
    pt->x = new_x;
}

int main() {
    struct Point pt = {5, 5};
    set_x_wrong(pt, 40); // Nedojde ke zmene, pt ve funkci je kopie!
    printf("%i", pt.x); // 5
    set_x(&pt, 40); // Dojde ke zmene, predavame pointer na "pt"
    printf("%i", pt.x); // 40
    return 0;
}