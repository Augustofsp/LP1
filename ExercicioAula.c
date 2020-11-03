/**
 * @file main.c
 * @author Augusto Pereira (a21136@alunos.ipca.pt)
 * @brief Soma, subtração, multiplicação e divisão de 2 números inteiros
 * @version 0.1
 * @date 2020-11-03
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Soma, subtração, multiplicação e divisão de 2 números inteiros
 * 
 */

int main()
{
    //Variaveis
    int numero1, numero2,soma, subtracao;
    float multiplicacao, divisao;

    //Inserir dados
    puts("Calculo de varias operacoes com 2 numeros inteiros\n");
    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);

    //Calculo das diversas operacoes
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    //Escrever o resultado das operacoes
    printf("O resultado da soma e: %d\n", soma);
    printf("O resultado da subtracao e: %d\n", subtracao);
    printf("O resultado da multiplicacao e: %.1f\n", multiplicacao);
    printf("O resultado da divisao e: %.1f\n", divisao);

    getchar();
    getchar();
    return 0;
}
