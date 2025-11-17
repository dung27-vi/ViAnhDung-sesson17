#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char input[100];
    printf("Nhap mot chuoi: ");
    scanf("%s", input);

    if (isPalindrome(input)) {
        printf("La palindrome\n");
    } else {
        printf("Khong phai palindrome\n");
    }

    return 0;
}
