#include <stdio.h>

int main()
{
    int n;
    
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);
    
    while(n < 1){
        printf("Entrada não permitida! Digite um número inteiro positivo: ");
        scanf("%d", &n);
    }
    
    printf("Números de 1 até N:\n");
    for(int i=0; i<n; i++){
        printf("%d ", i+1);
    }

    return 0;
}