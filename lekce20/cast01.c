int extern foreign_fn(int, int);
int main() {
    int result = foreign_fn(1, 2);
    char c = (char) result;
    return 0;
}