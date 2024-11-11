// Imports
#include <stdio.h>
#include <stdlib.h>


// Interface

void cria_vetor(){}

void adiciona_funcionario(){}

void remove_funcionario(){}

void busca_funcionario(){}

void imprime_funcionario(){}

void salvar_dataset(char path[40]){
    FILE *file_dataset;
    file_dataset = fopen(path, "w");

    fclose(file_dataset);
}

void carregar_dataset(){}

