#include <stdio.h>

int main(){
    int n;
    int is_prime = 1;
    int n_divisores = 0;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(n%i==0) n_divisores++;
        if(n_divisores>1){
            is_prime = 0;
            break;
        }
    }
    
    if(n < 2 || !is_prime){
        printf("O número %d não é primo.", n);
        return 0;
    }
    else if(is_prime){
        printf("O número %d é primo.", n);
        return 0;
    }
    else return 0;

}