#include <stdio.h>
#include <string.h>


int main() {
    char str[1000];
    char longest_word[100];
    int max_len = 0;

    printf("Nhap mot chuoi bat ki: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    char *word = strtok(str, " \t");

    while (word != NULL) {
        int current_len = strlen(word);
        if (current_len > max_len) {
            max_len = current_len;
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " \t");
    }

    if (max_len > 0) {
        printf("Tu dai nhat la: %s\n", longest_word);
        printf("Ðo dai cua tu la: %d\n", max_len);
    } else {
        printf("Chuoi rong hoac khong co tu nao.\n");
    }

    return 0;
}
