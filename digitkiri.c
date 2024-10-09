#include <stdio.h>
#include <math.h>

int main() {
    int bilangan, jumlahDigit, digit, i;

    // Meminta input dari pengguna
    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    printf("Masukkan jumlah digit yang ingin diambil dari kiri: ");
    scanf("%d", &jumlahDigit);

    // Memastikan jumlah digit yang diminta valid
    if (jumlahDigit <= 0) {
        printf("Jumlah digit harus lebih dari 0.\n");
        return 1;
    }

    // Menghitung jumlah digit total dari bilangan
    int jumlahDigitTotal = 0;
    int temp = bilangan;
    while (temp > 0) {
        jumlahDigitTotal++;
        temp /= 10;
    }

    // Memastikan jumlah digit yang diminta tidak melebihi jumlah digit total
    if (jumlahDigit > jumlahDigitTotal) {
        printf("Jumlah digit yang diminta melebihi jumlah digit bilangan.\n");
        return 1;
    }

    // Mengambil digit dari kiri
    for (i = 0; i < jumlahDigit; i++) {
        digit = bilangan % 10;
        bilangan /= 10;
        printf("%d ", digit);
    }

    printf("\n");

    return 0;
}