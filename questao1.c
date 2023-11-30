#include <stdio.h>
void calcula(valor1, valor2){
    int resultado;
    if(valor1 < valor2){
        resultado = valor1 + valor2;
        printf("%d", resultado);
    } else if(valor1 == valor2){
        resultado = valor1 * valor2;
        printf("%d", resultado);
    } else{
        resultado = valor1 - valor2;
        printf("%d", resultado);
    }
}

int main(){
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    calcula(n1, n2);
}
