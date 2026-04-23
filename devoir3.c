#include<stdio.h>

long long puissance_lineaire_iterative(long long a , int n){
    int i = 0, resultat = 1;

    while (i < n){
        resultat *= a;
        i++;
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

    res =  puissance_lineaire_iterative(a,n);
    printf("%lld", res);
}
