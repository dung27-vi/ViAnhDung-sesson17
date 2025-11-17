#include <stdio.h>
#include <string.h>

void removeChar(char *str, char charToRemove) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != charToRemove) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char charToRemove;

    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    printf("Nhap ki tu can xoa: ");
    scanf("%c", &charToRemove);

    removeChar(str, charToRemove);

    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}
