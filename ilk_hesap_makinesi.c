// İlk hesap makinesi - 16 Ekim 2026
// Erciyes Üniversitesi 1. sınıf

#include <stdio.h>

int main() {
    float sayi1, sayi2;
    printf("Birinci sayiyi gir: ");
    scanf("%f", &sayi1);
    printf("Ikinci sayiyi gir: ");
    scanf("%f", &sayi2);
    
    printf("Toplam: %.2f\n", sayi1 + sayi2);
    printf("Fark: %.2f\n", sayi1 - sayi2);
    printf("Carpim: %.2f\n", sayi1 * sayi2);
    printf("Bolum: %.2f\n", sayi1 / sayi2);
    return 0;
}
