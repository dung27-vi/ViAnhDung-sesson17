#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertString(char str[], int option) {
    for (int i = 0; str[i] != '\\0'; i++) {
        if (option == 1) {
            str[i] = toupper(str[i]);
        } else if (option == 2) {
            str[i] = tolower(str[i]);
        }
    }
}
int main() {
    int option;
    char str[100];
    printf("Menu:\n");
    printf("\n Nhap 1 - In ra chuoi voi toan bo ky tu duoc chuyen thanh chu hoa.\n");
    printf("\n Nhap 2 - In ra chuoi voi toan bo ky tu duoc chuyen thanh chu thuong.\n");
    printf("\n Nhap lua chon cua ban: ");
    scanf("%d", &option);

    while (getchar() != '\\n'); 
    printf("Nhap mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\\n")] = '\\0'; 
    convertString(str, option);
    printf("Ket qua: %s\\n", str);
    return 0;
}
