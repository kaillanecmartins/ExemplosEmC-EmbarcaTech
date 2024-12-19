/*Peça ao usuário um número e exiba o quadrado desse número.*/

#include <stdio.h>

int main(){

    //declaração das variáveis
    int n, quadrado;

    //exibe a mensagem para o usuário
    printf("Digite um numero: ");
    //recebe o valor digitado pelo usuário
    scanf("%d", &n);
    
    //a variável quadrado recebe o processamento desejado
    quadrado = n*n;

    //exibe na tela o valor que foi digitado e o resultado do processamento
    printf("O quadrado de %d: %d", n, quadrado);

    //opção alternativa, faz o processamento diretamente na saída
    printf("\nquadrado: %d", (n*n));

}