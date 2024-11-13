// Imports
#include <stdio.h>
#include <stdlib.h>


// Interface

void cria_vetor(){}

void adiciona_funcionario(){}

void remove_funcionario(){}

void busca_funcionario(){}

void imprime_funcionario(){}

int salvar_dataset(char path[40], char string[20]){
    int success = 0;
    while (!success){
        FILE *file_dataset;
        file_dataset = fopen(path, "w");

        if(file_dataset == NULL){
            fclose(file_dataset);
            file_dataset = fopen(path, "a");
        }else{
            fprintf(file_dataset, string);
            success = 1;
        }

        fclose(file_dataset);
    }
}

int carregar_dataset(char path[40]){
    
    char linha[50];
    int count;
    char *tok;
    
    FILE *file_dataset;
    file_dataset = fopen(path, "r");
    if(file_dataset == NULL){
        return EXIT_FAILURE;
    }else{
        fgets(linha, sizeof(linha), file_dataset);
    }

    fclose(file_dataset);
    return EXIT_SUCCESS;
}
