#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char *str = "Hello";
    file = fopen("my_file.txt", "a");
    fwrite(&str, 1, sizeof(str), file);
    fclose(file);
    return 0;
}
