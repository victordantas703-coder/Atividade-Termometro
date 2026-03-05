#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char input[10];
    float q;
    
    printf("Uso:\nPara temperaturas em graus Celsius, digite um número seguido de '°C', como 10°C, 30°C, etc.\nPara temperaturas em Fahrenheit, digite por exermplo 20°F, 50°F, etc.\n");
    
    printf("\nDigite uma temperatura em Celsius ou em Fahrenheit: ");
    scanf("%s", input);
    
    q = atof(input);
    
    if(strstr(input, "°C") != NULL){
        printf("A temperatura de %s para Fahrenheit é de %.2f°F", input, q*1.8 + 32);
    }
    
    else if(strstr(input, "°F") != NULL){
        printf("A temperatura de %s para Celsius é de %.2f°C", input, ((q - 32)*5)/9);
    }

}