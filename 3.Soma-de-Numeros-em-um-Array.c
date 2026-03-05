#include <stdio.h>

int main(){
    int n;
    int soma = 0;
    int vetor[5];
    
    printf("Digite 5 números inteiros: ");
    
    for(int i = 0; i<5; i++){
        scanf("%d", &n);
        vetor[i] = n;
    }
    
    printf("Números que estão armazenados no array: ");
    for(int i = 0; i<5; i++) printf("%d ", vetor[i]);
    printf("\n");
    
    printf("Soma dos números que estão armazenados no array: ");
    for(int i = 0; i<5; i++){
        soma = soma + vetor[i];
    }
    printf("%d\n", soma);

    return 0;
}