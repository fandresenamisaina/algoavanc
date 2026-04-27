#include <stdio.h>

void binaire_iter(int n) {
    int bits[32];  // tableau pour stocker les bits
    int i = 0;     // compteur de bits

    // Cas spécial : n = 0
    if (n == 0) {
        printf("0");
        return;
    }

    // Remplissage du tableau
    while (n > 0) {
        bits[i++] = n % 2;
        n /= 2;
    }

    // Affichage en ordre inverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
}

int main() {
    int n;
    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    printf("Binaire de %d = ", n);
    binaire_iter(n);
    printf("\n");

    return 0;
}
