#include <stdio.h>

// Leia dois números e exiba a diferença entre o maior e o menor.

int main()
{
    // declaracao de variaveis
    int n1, n2, diferenca;

    // mostra mensagem na tela
    printf("Digite um numero: ");

    // faz pergunta ao usuario
    scanf("%d", &n1);

    printf("Digite outro numero: ");
    scanf("%d", &n2);

    // variavel para armazenar a operacao
    diferenca = n1 - n2;


    printf("A diferenca entre %d e %d eh %d", n1, n2, diferenca);

    return 0;
} 
