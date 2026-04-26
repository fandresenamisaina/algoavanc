#include<stdio.h>

int nb_chiffres_rec(int n){
    if(n < 0){
        n = -n;
    }

    if(n < 10){
        return 1;
    }

    return 1 + nb_chiffres_rec(n / 10);
}

int main(){
    int n;
    printf("entre la valeur de n : \n");
    scanf("%d", &n);

    printf("%d\n", nb_chiffres_rec(n));
    return 0;
}
