#include<stdio.h>

long long puissance_rapide_iterative(long long a, int n){
    long long resultat =1;

    while(n > 0){
        if(n % 2 == 1){
            resultat *=a;
        }
        a *= a;
        n /= 2;
    }
    return resultat;
}

int main (){
    long long a, res;
    int n;
    printf("Entrer  n:");
    scanf("%d", &n);

    printf("entrer a :");
    scanf("%lld", &a);

    res =  puissance_rapide_iterative(a,n);
    printf("%lld", res);
}
