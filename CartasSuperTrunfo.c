#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int codigo;
    int populacao;
    int pib;
    int pontos_turisticos;
    char nome[50];
    float area;

    

    printf("Desafio - Cadastro das cartas!\n\n");

    printf("Digite o nome do pais:\n");
    scanf("%s", &nome);

    printf("Digite o codigo do pais:\n");
    scanf("%d", &codigo);

    printf("Digite a quantidade de habitantes:\n");
    scanf("%d", &populacao);

    printf("Digite o PIB do pais:\n");
    scanf("%d", &pib);

    printf("Digite o tamanho da area do pais:\n");
    scanf("%f", &area);

    printf("Digite quantos pontos turisticos tem:\n");
    scanf("%d", &pontos_turisticos);


    printf("\n\nCarta numero 1\n");

    printf("Nome do pais: %s\n", nome);
    printf("Codigo do pais: %d\n", codigo);
    printf("Tamanho populacional: %d\n", populacao);
    printf("Valor do PIB: %d\n", pib);
    printf("Tamanho da area: %f\n", area);
    printf("Quantidade de pontos turisticos: %d\n\n", pontos_turisticos);
    printf("As informações acima referem-se a carta 1 do jogo!");
    
    

    

    return 0;
}
