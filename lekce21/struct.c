struct Person {
    char *firstname;
    char *surname;
    char *city;
    int year_born;
};

int main() {
    // Deklarace a inicializace struktury
    struct Person p = {
        "Jan",
        "Novak",
        "Praha",
        1995
        };
    printf("%s", p.firstname); // Jan
    printf("%s", p.city); // Praha
}