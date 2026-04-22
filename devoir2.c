#include <stdio.h>

unsigned int count = 0;

unsigned int puissance_rapide(unsigned int x, unsigned int n) {
    printf("Appel %u ^ %u\n", x, n);

    if (n == 0) {
        count++;
        return 1;
    }

    count++;

    unsigned int temp = puissance_rapide(x, n / 2);

    if (n % 2 == 0) {
        return temp * temp;
    } else {
        return x * temp * temp;
    }
}

int main() {
    unsigned int x, n;

    printf("entrer x : ");
    scanf("%u", &x);

    printf("entrer n : ");
    scanf("%u", &n);

    unsigned int resultat = puissance_rapide(x, n);

    printf("Resultat = %u\n", resultat);
    printf("Nombre d'appels = %u\n", count);

    return 0;
}
