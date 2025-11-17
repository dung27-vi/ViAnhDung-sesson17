#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool check_length(const char *password) {
    return strlen(password) >= 8;
}

bool check_uppercase(const char *password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) return true;
    }
    return false;
}

bool check_lowercase(const char *password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (islower(password[i])) return true;
    }
    return false;
}

bool check_digit(const char *password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) return true;
    }
    return false;
}

bool check_special(const char *password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (!isalnum(password[i])) return true;
    }
    return false;
}

int main() {
    char password[100];
    printf("Nhap mat khau: ");
    scanf("%s", password);

    if (check_length(password) && check_uppercase(password) && check_lowercase(password) && check_digit(password) && check_special(password)) {
        printf("Hop le\n");
    } else {
        printf("Khong hop le\n");
    }

    return 0;
}
