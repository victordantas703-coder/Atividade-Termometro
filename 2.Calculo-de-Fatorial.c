#include <stdio.h>

unsigned long long Fatorial(int n){
    if(n>1) return n*Fatorial(n-1);
    else return n;
}

int main(){
    int n;
    
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);
    
    while(n < 1){
        printf("Entrada não permitida! Digite um número inteiro positivo: ");
        scanf("%d", &n);
    }
    
    printf("O fatorial de %d é %llu.", n, Fatorial(n));

    return 0;
}