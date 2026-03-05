#include <stdio.h>
#include <string.h>

int main(){
    
    char input[1000];
    int n_caracteres;

    printf("Digite uma string para saber quantos caracteres ela possui: ");
    fgets(input,sizeof(input),stdin);
    input[strcspn(input, "\n")] = '\0';

    n_caracteres = strlen(input);

    printf("Sua string possui %d caracteres.", n_caracteres);

    return 0;
}