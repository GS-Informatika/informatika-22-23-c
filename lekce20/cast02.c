int extern foreign_fn(int, int);
int main() {
    short a = 21;
    short b = 25;
    int c = foreign_fn(a, b); // a, b implicitne pretypovano na int
}