#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("data.txt", "r"); // Ganti "data.txt" dengan nama file yang sesuai

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    int id;
    char nama[50];
    double saldo;

    printf("ID\tNama\t\t\tSaldo\n");
    while (fscanf(file, "%d %99[^\n] %lf", &id, nama, &saldo) != EOF) {
        printf("%d\t%s\t%.2lf\n", id, nama, saldo);
    }

    fclose(file);
    return 0;
}
