#include <stdio.h>
#include <string.h>
//Definindo estrutura do tipo Território
typedef struct
{
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    //Criar vetor dos territórios
    Territorio territorios[5];

    printf("===============================================\n");
    printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n\n");

    //Loop para cadastrar cada território
    for (int i = 0; i < 5; i++)
    {
        printf("--- Cadastrando território %d ---\n", i + 1);

        printf("Nome do território: ");
        scanf("%s", territorios[i].nome);

        printf("Cor do território: ");
        scanf("%s", territorios[i].cor);

        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); //Limpa o buffer

        printf("\n");
    }   
    
    //Exibindo territórios cadastrados
    printf("============================================\n");
    printf("--- TERRITÓRIOS CADASTRADOS ---\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\nTerritório %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }
    
    
    return 0;
}
