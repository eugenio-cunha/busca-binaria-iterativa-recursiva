/* 
 * File:   busca.h
 * Author: Eugenio Cunha
 *
 */

#include <stdlib.h>
#include <stdio.h>

#include "busca.h"

//Busca iterativa

int busca_iterativa(int *vetor, int elemento, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == elemento) {
            return meio;
        } else if (vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

//Busca recursiva

int busca_recursiva(int *vetor, int elemento, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == elemento) {
            return meio;
        } else if (vetor[meio] < elemento) {
            return busca_recursiva(vetor, elemento, meio + 1, fim);
        } else {
            return busca_recursiva(vetor, elemento, inicio, meio - 1);
        }
    }
}