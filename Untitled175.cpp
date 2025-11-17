#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Nhap vao chuoi thu nhat: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0;
    
    printf("Nhap vao chuoi thu hai: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; 

    if (strcasecmp(s1, s2) == 0) {
        printf("Ket qua: **Giong nhau**\n");
    } else {
        printf("Ket qua: **Khac nhau**\n");
    }

    return 0;
}
