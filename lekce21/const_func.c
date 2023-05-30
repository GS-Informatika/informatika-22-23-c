int copy(const int * source, int * destination) {
    // Uvnitr funkce nelze menit hodnotu na adrese a
    *destination = *source;
    *source = 5; //error
}

int main() {
    int a = 5; // Neni deklarovano jako const
    int b;
    copy(a, b); // Funkce se k promenne 'a' ale bude
                // chovat jako ke konstante
                // a mame "jistotu" ze zustane nezmenena
}