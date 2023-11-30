#include <stdio.h>
#include <string.h>

int main(){
    char string1[100];
    char string2[100];
    int resultado, i, j;

    printf("Digite a primeira string: ");
    gets(string1);
    printf("Digite a segunda string: ");
    gets(string2);

    for(i = 0; i < '\0'; i++){
        string1[i];
    }
    for(j = 0; j < '\0'; j++){
        string2[j];
    }
    resultado = i + j / 2;
    printf("%d", resultado);
}