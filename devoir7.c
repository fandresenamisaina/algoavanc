#include<stdio.h>

long long factorielle_iterative(int n){
    long long res = 1;
    int i = 2;

    while(i <= n){
        res *=i;
        i++;
    }
    return res;
}

int main(){
    int n;
    printf("entre la valeur de n : \n");
    scanf("%d", &n);
    if(n < 0){
    printf("le nombre doit être positif\n");
    return 0;
}
    printf("%lld", factorielle_iterative(n));
    return 0;
}
