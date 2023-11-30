#include <stdio.h>

int fatorial(numero){
    int numeroanterior = 0;
    int resultado;
    for(int i = 0; i <= numero; i++){
        resultado += i * numeroanterior;
        numeroanterior == resultado;
    }
    return resultado;
}
int main(){
    int n1;
    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("O resultado do fatorial eh %d", fatorial(n1));
}