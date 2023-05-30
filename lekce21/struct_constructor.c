struct Person {
    char *firstname;
    char *surname;
    char *city;
    int year_born;
};

void Person_init(
    struct Person* const obj,
    const char* const firstname,
    const char* const surname,
    const char* const city,
    const int year_born) {
    obj->firstname = firstname;
    obj->surname = surname;
    obj->city = city;
    obj->year_born = year_born;
}