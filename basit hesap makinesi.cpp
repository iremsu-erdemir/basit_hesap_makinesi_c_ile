#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int secim;
    int sayi1, sayi2;

    printf("\n toplama icin '1'\n cikarma icin '2'\n carpma icin '3'\n bolme icin '4'\n Islem numarasi: ");
    scanf("%d", &secim);

    if (secim >= 1 && secim <= 4) {
        printf(" sayi1: ");
        scanf("%d", &sayi1);
        printf(" sayi2: ");
        scanf("%d", &sayi2);

        if (secim == 1) {
            printf(" sayi1 + sayi2 : %d", sayi1 + sayi2);
        } else if (secim == 2) {
            printf(" sayi1 - sayi2 : %d", sayi1 - sayi2);
        } else if (secim == 3) {
            printf(" sayi1 * sayi2 : %d", sayi1 * sayi2);
        } else if (secim == 4) {
            if (sayi2 != 0) {
                printf(" sayi1 / sayi2 : %d", sayi1 / sayi2);
            } else {
                printf("Sifira bolunemez!\n");
            }
        }
    } else {
        printf(" yanlis secim yaptiniz.");
    }

    return 0;
}

