#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[50];

    printf("Nhap vao chuoi thu nhat: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Nhap vao chuoi thu hai: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    strcat(str1, str2);

    printf("Ket qua sau khi noi: %s\n", str1);

    return 0;
}
