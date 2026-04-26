#include<stdio.h>

long long factorielle(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorielle(n - 1);;
    }
}

int main(){
    int n;
    printf("entre la valeur de n : \n");
    scanf("%d", &n);

    printf("%lld", factorielle(n));
    return 0;
}
