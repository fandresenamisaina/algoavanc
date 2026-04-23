#include<stdio.h>

long long puissance_rapide(long long a, int n){
    long long resultat = 1;

    while(n != 0){

        if(n % 2 == 0){
            a = a * a;
            n = n /2;
        }
        else{
            resultat = resultat * a;
            n = n - 1;
        }
    }
    return resultat;
}

int main (){
    printf("%lld \n", puissance_rapide(3,4));
    return 0;
}
