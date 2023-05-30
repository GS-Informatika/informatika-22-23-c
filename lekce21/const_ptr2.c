int main() {
    int x[2] = {10, 20};
    int *x_ptr = x; // cast z array do pointeru (vysvetleno dale)
    printf("%i\n", *x_ptr); // 10
    x_ptr += 1; // modifikace lokace 
    // (ne hodnoty na lokaci! neni dereference!)
    printf("%i\n", *x_ptr); // 20;
    int * const x_cptr = x;
    x_cptr += 1; //error
}