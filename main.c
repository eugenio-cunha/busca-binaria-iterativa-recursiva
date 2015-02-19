/* 
 * File:   main.c
 * Author: eugenio
 *
 * Created on February 13, 2015, 10:54 AM
 */

#include <stdio.h>
#include <stdlib.h>

#include "busca.h"

/*
 * 
 */
int main(int argc, char** argv) {
    char entrada[20];
    int opcao;
    int elemento;
    int resultado;
    int vetor_teste[20] = {3, 9, 18, 22, 22, 31, 32, 33, 46, 48, 50, 51, 53, 55, 63, 74, 76, 83, 85, 91};
    int tamanho = sizeof (vetor_teste) / sizeof (int);
    do {
        printf("Escolha uma das opcoes:\n"
                "[1] Fazer busca binaria iterativa\n"
                "[2] Fazer busca binaria recursiva\n"
                "[3] Sair\n");

        fgets(entrada, 19, stdin);
        opcao = atoi(entrada);
        system("clear");
        if (opcao == 1) {
            printf("Digite o valor do elemento: ");
            fgets(entrada, 19, stdin);
            elemento = atoi(entrada);
            resultado = busca_iterativa(vetor_teste, elemento, tamanho);
            if (resultado != -1) {
                printf("O elemento procurado esta na posicao %d\n", resultado);
            } else {
                printf("O elemento procurado nao esta presente no vetor\n");
            }
        } else if (opcao == 2) {
            printf("Digite o valor do elemento: ");
            fgets(entrada, 19, stdin);
            elemento = atoi(entrada);
            resultado = busca_recursiva(vetor_teste, elemento, 0, tamanho - 1);
            if (resultado != -1) {
                printf("O elemento procurado esta na posicao %d\n", resultado);
            } else {
                printf("O elemento procurado nao esta presente no vetor\n");
            }
        } else {
            exit(0);
        }
    } while (1);



    return (EXIT_SUCCESS);
}

