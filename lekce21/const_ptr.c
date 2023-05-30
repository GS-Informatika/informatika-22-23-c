int main() {
    const int x = 5;
    int * px_mod = &x;
    const int * px_const = &x;
    *px_mod = 7; // bez erroru!
    *px_const = 9; // error
}