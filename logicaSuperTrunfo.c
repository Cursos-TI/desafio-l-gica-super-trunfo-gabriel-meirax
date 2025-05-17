#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

     char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50], buffer[4], vencedor[50]; // Inicialização das variáveis do tipo char, string e buffer. O buffer é utilizado apenas como armazenamento temporário.

    int turistico1, turistico2; // Inicialização das variáveis do tipo int.
    unsigned long int populacao1, populacao2, pontuacao1, pontuacao2; // Inicialização das variáveis do tipo unsigned long int.

    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2, superPoder1, superPoder2; // Inicialização das variáveis do tipo float.
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Primeira carta do Super Trunfo!\nEscolha a letra do estado: ");
    scanf(" %c", &estado1); // Atribui o valor da letra do estado à variável estado1. O espaço antes do %c é importante para ignorar o caractere de nova linha deixado pelo scanf anterior.

    printf("Digite o Código da carta: ");
    scanf("%s", &buffer); // O buffer é utilizado para armazenar temporariamente o código da carta. O %s lê uma string até encontrar um espaço em branco.

    sprintf(codigo1, "%c%s", estado1, buffer); // O sprintf formata a string e armazena o resultado na variável codigo1. O %c é substituído pelo valor da variável estado1 e %s pelo valor do buffer.

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade1);  // O %[^\n] lê uma string até encontrar um caractere de nova linha, permitindo que o nome da cidade contenha espaços.

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%lu", &populacao1); // Atribui o valor da quantidade de habitantes à variável populacao1. O %d lê um número inteiro.

    printf("Digite a área da cidade: ");
    scanf("%f", &area1); // Atribui o valor da área à variável area1. O %f lê um número de ponto flutuante.

    printf("Digite o PIB em bilhões de reais da cidade: ");
    scanf("%f", &pib1); // Atribui o valor do PIB à variável pib1. O %f lê um número de ponto flutuante.

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%d", &turistico1); // Atribui o valor do número de pontos turísticos à variável turistico1. O %d lê um número inteiro.

    densidade1 = (float) populacao1 / area1; // Cálculo da densidade populacional. A densidade é calculada dividindo a população pela área.

    pibPerCapita1 = pib1 * 1000000000  / (float) populacao1; // Cálculo do PIB per capita. O PIB é multiplicado cem milhões e dividido pela população.
    
    // Repetir o processo para a segunda carta:
    printf("\nSegunda carta do Super Trunfo!\nEscolha a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta: ");
    scanf("%s", &buffer);

    sprintf(codigo2, "%c%s", estado2, buffer);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%d", &turistico2);

    densidade2 = (float) populacao2 / area2;

    pibPerCapita2 = pib2 * 1000000000 / (float) populacao2;

    printf("\n\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if (populacao1 > populacao2) {
        printf("Carta %s tem mais população\n", cidade1);
        pontuacao1++;
    } else if (populacao2 > populacao1) {
        printf("Carta %s tem mais população\n", cidade2);
        pontuacao2++;
    } else {
        printf("Houve um empate na população\n");
    }

    if (area1 > area2) {
        printf("Carta %s tem mais área\n", cidade1);
        pontuacao1++;
    } else if (area2 > area1) {
        printf("Carta %s tem mais área\n", cidade2);
        pontuacao2++;
    } else {
        printf("Houve um empate na área\n");
    }

    if (pib1 > pib2) {
        printf("Carta %s tem o PIB maior", cidade1);
        pontuacao1++;
    } else if (pib2 > pib1){
        printf("Carta %s tem o PIB maior", cidade2);
        pontuacao2++;
    } else {
        printf("Houve um empate no PIB\n");
    }

    if (turistico1 > turistico2){
        printf("Carta %s tem mais pontos turísticos\n", cidade1);
        pontuacao1++;
    } else if (turistico2 > turistico1){
        printf("Carta %s tem mais pontos turísticos\n", cidade2);
        pontuacao2++;
    } else {
        printf("Houve um empate nos pontos turísticos\n");
    }
    
    if ((1.f / densidade1) > (1.f / densidade2)) {
        printf("Carta %s tem melhor densidade demográfica\n", cidade1);
        pontuacao1++;
    } else if ((1.f / densidade2) > (1.f / densidade1)) {
        printf("Carta %s tem melhor densidade demográfica\n", cidade2);
        pontuacao2++;
    } else {
        printf("Houve um empate na densidade demográfica\n");
    }

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta %s tem maior PIB Per Capita\n", cidade1);
        pontuacao1++;
    } else if (pibPerCapita2 > pibPerCapita1){
        printf("Carta %s tem maior PIB Per Capita\n", cidade2);
        pontuacao2++;
    } else  {
        printf("Houve um empate no PIB Per Capita\n");
    }
    
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    if (pontuacao1 > pontuacao2) {
        printf("A cidade vencedora é: %s. Com %lu pontos\n", cidade1, pontuacao1);
    } else if (pontuacao2 > pontuacao1) {
        printf("A cidade vencedora é: %s. Com %lu pontos\n", cidade2, pontuacao2);
    } else {
        printf("As cidades empataram, com pontuação de %lu\n", pontuacao1);
    }

    return 0;
}
