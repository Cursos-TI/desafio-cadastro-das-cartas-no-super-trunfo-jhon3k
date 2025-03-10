#include <stdio.h>

int main (){
    // Variáveis da Carta 1.
    char estado[20];
    char codigoDaCarta[20];
    char nomeCidade[20];
    int numeroHabitantes;
    float areaAoQuadrado;
    float pib;
    int NumerodePontosTuristicos;

    // Variáveis da Carta 2.
    char segundoEstado[20];
    char codigoDaSegundaCarta[20];
    char segundoNomeCidade[20];
    int segundoNumeroHabitantes;
    float segundoAreaAoQuadrado;
    float segundoPib;
    int segundoNumerodePontosTuristicos;

    // Printf de introdução ao jogo Super Trunfo.
    printf("Bem-vindo ao jogo Super Trunfo! \nVamos forma a primeira carta:\n");

    // Printf para escolher uma letra representando um Estado.
    printf("Escolhar uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", estado);

    // Printf para passa novamente a letra do Estado mais um número de código.
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", codigoDaCarta);

    // Printf para escolher uma Cidade.
    printf("Passe o nome da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", nomeCidade);

    // Printf para passa o número de habitantes da cidade escolhida.
    printf("O número de habitantes da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &numeroHabitantes);

    // Printf para passa a área da Cidade em quilômetros quadrados.
    printf("A área da cidade em quilômetros quadrados: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &areaAoQuadrado);

    // Printf para passa PIB da Cidade escolhida.
    printf("O Produto Interno Bruto da cidade(PIB): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &pib);

    // Printf para passa a quantidade de pontos turísticos da Cidade escolhida.
    printf("A quantidade de pontos turísticos na cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &NumerodePontosTuristicos);


    // Printf para anuncia a criação da segunda carta do jogo Super Trunfo.
    printf("Agora vamos forma a segunda carta: \n");

    // Printf para escolher uma letra representando um Estado para a segunda carta.
    printf("Escolhar uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", segundoEstado);

    // Printf para passa novamente a letra do Estado mais um número de código para a segunda carta.
    printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", codigoDaSegundaCarta);

    // Printf para escolher uma Cidade para a segunda carta.
    printf("Passe o nome da cidade(use traço para separa as palavras): \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%s", segundoNomeCidade);

    // Printf para passa o número de habitantes da cidade escolhida da segunda carta.
    printf("O número de habitantes da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &segundoNumeroHabitantes);

    // Printf para passa a área da Cidade em quilômetros quadrados da segunda carta.
    printf("A área da cidade em quilômetros quadrados: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &segundoAreaAoQuadrado);

    // Printf para passa PIB da Cidade escolhida da segunda carta.
    printf("O Produto Interno Bruto da cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf(" %f", &segundoPib);

    // Printf para passa a quantidade de pontos turísticos da Cidade escolhida da segunda carta.
    printf("A quantidade de pontos turísticos na cidade: \n");
    // Scanf para receber e guardar a resposta do usuário.
    scanf("%d", &segundoNumerodePontosTuristicos);
    
    // Printfs que seram exibidas
    printf("\nCarta 1: \n");
    printf("Estado: %s  \nCódigo: %s \n", estado, codigoDaCarta);
    printf("Nome da Cidade: %s  \nPupulação: %d \n", nomeCidade, numeroHabitantes);
    printf("Área: %f km² \nPIB: %f \n", areaAoQuadrado, pib);
    printf("Número de Pontos Turísticos: %d \n", NumerodePontosTuristicos);

    printf("\nCarta 2: \n");
    printf("Estado: %s \nCódigo: %s \n", segundoEstado, codigoDaSegundaCarta);
    printf("Nome da Cidade: %s  \nPupulação: %d \n", segundoNomeCidade, segundoNumeroHabitantes);
    printf("Área: %f km² \nPIB: %f \n", segundoAreaAoQuadrado, segundoPib);
    printf("Número de Pontos Turísticos: %d", segundoNumerodePontosTuristicos);

    return 0;
}