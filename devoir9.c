#include <stdio.h>

void binaire_rec(int n) {
    if (n > 1) {
        binaire_rec(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int n;
    printf("Entrez le nombre à convertir en binaire : ");
    scanf("%d", &n);

    printf("Binaire de %d = ", n);
    binaire_rec(n);
    printf("\n");

    return 0;
}
