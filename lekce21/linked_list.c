#include <stdio.h>
struct IntLinkedList {
    int head;
    struct IntLinkedList *tail; // Rekurzivni struktura
};

struct IntLinkedList cons(int head, struct IntLinkedList *tail) {
    struct IntLinkedList ll = {head, tail};
    return ll; // Pridavame novy head za tail
}

int first(struct IntLinkedList *list) { return list->head; }

struct IntLinkedList* rest(struct IntLinkedList *list) { return list->tail; }

int sum (struct IntLinkedList *list) {
    if (list == NULL) return 0;
    return first(list) + sum(rest(list));
}

int main() {
    struct IntLinkedList ll1 = cons(10, NULL),
        ll2 = cons(20, &ll1),
        ll3 = cons(30, &ll2);
    int result = sum(&ll3); // 60
    return 0;
}
