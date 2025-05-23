#include <stdio.h>

int main() {
    //variaveis da carta1
    char estado1[3], codigoDaCarta1[50], nomeDaCidade1[50];
    unsigned long int populacao1;
    float areaEmKm1, pib1;
    int numDeTuristicos1;

    //variaveis da carta2
    char estado2[3], codigoDaCarta2[50], nomeDaCidade2[50];
    unsigned long int populacao2;
    float areaEmKm2, pib2;
    int numDeTuristicos2;

    //Entrada e saida da carta 1
    printf("Digite o estado da carta 1: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta 1: \n");
    scanf("%s", codigoDaCarta1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf("%s", nomeDaCidade1);

    printf("Digite a populacao da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km da carta 1: \n");
    scanf("%f", &areaEmKm1);

    printf("Digite o pib da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de áreas turisticas da carta 1: \n");
    scanf("%d", &numDeTuristicos1);

    //Entrada e saida da carta 2
    printf("Digite o estado da carta 2: \n");
    getchar();
    scanf("%s", estado2);

    printf("Digite o codigo da carta 2: \n");
    scanf("%s", codigoDaCarta2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf("%s", nomeDaCidade2);

    printf("Digite a populacao da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km da carta 2: \n");
    scanf("%f", &areaEmKm2);

    printf("Digite o pib da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de áreas turisticas da carta 2: \n");
    scanf("%d", &numDeTuristicos2);

//Dados inseridos pelo jogador sobre a carta 1
printf("Estado da carta 1: %s - Código da carta 1: %s\n", estado1, codigoDaCarta1);
printf("Nome da cidade da carta 1: %s - População da carta 1: %lu\n", nomeDaCidade1, populacao1);
printf("Area em km da carta1: %.2f - PIB da carta 1: %.2f\n", areaEmKm1, pib1);
printf("Número de áreas turísticas da carta 1: %d\n", numDeTuristicos1);

//Dados inseridos pelo jogador sobre a carta 2
printf("Estado da carta 2: %s - Código da carta 2: %s\n", estado2, codigoDaCarta2);
printf("Nome da cidade da carta 2: %s - População da carta 2: %lu\n", nomeDaCidade2, populacao2);
printf("Area em km da carta2: %.2f - PIB da carta 2: %.2f\n", areaEmKm2, pib2);
printf("Número de áreas turísticas da carta 2: %d\n", numDeTuristicos2);


//parte 2, calculando a densidade populacional e armazenar em float (dividir populacao cidade por area); calculando pib per capita (pib pela populaçao), exibir esses resultados de cada cidade.

//criando as variaveis que sao as divisoes
long double densidadePopulacional1 = (float) populacao1 / areaEmKm1;

long double pibPerCap1 = pib1 / (float) populacao1;

//cidade 2
long double densidadePopulacional2 = (float) populacao2 / areaEmKm2;

long double pibPerCap2 = pib2 / (float) populacao2;

//exibir os resultados

printf("Densidade populacional da cidade 1: é %.2Lf\n", densidadePopulacional1);
printf("Pib per capita da cidade 1 é: %.2Lf\n", pibPerCap1);
printf("Densidade populacional da cidade 2 é: %.2Lf\n", densidadePopulacional2);
printf("Pib per capita da cidade 2 é: %.2Lf\n", pibPerCap2);



//parte 3 - calculando o super poder;
// invertendo valor da densidade populacional
long double inversoDens1 = 1.0 / densidadePopulacional1;
long double inversoDens2 = 1.0 / densidadePopulacional2;


// calculando super poder da cidade 1
long double superPoder1 = (float) populacao1 + areaEmKm1 + pib1 + (float) numDeTuristicos1 + inversoDens1;

//cidade 2 

long double superPoder2 = (float) populacao2 + areaEmKm2 + pib2 + (float) numDeTuristicos2 + inversoDens2;

//tema 2, desenvolvendo a lógica do jogo
//parte 1- implementando estruturas if-else, comparando duas cartas.

if (superPoder1 > superPoder2) {
    printf("O super poder da cidade 1 é maior que o da cidade 2.\n");
} else if (superPoder2 > superPoder1) {
    printf("O super poder da cidade 2 é maior que o da cidade 1.\n");
} else {
    printf("As duas cidades têm o mesmo super poder.\n");
}

//tema mestre, incrementando o operador ternário e menu com multiplas escolhas

int opcao1, opcao2;

printf("Escolha dois atributos diferentes para serem comparados.\n");
printf("1. Populacao\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Numero de pontos turisticos\n");
printf("5. Densidade demográfica\n");


printf("escolha o primeiro atributo\n");
scanf("%d", &opcao1);

printf("escolha o segundo atributo\n");
scanf("%d", &opcao2);

//impedindo o jogador de usar o mesmo atributo
if(opcao1 == opcao2){
    printf("Voce nao pode comparar os mesmos atributos. encerrando o programa\n");
return 0;
}


//menu interativo das duas opcoes
switch (opcao1)  //começa o menu interativo
{
case 1:
    if(populacao1 > populacao2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (populacao1 == populacao2){
        printf("empate!");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
case 2:
if(areaEmKm1 > areaEmKm2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (areaEmKm1 == areaEmKm2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
    case 3:
if(pib1 > pib2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (pib1 == pib2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
case 4:
if(numDeTuristicos1 > numDeTuristicos2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (numDeTuristicos1 == numDeTuristicos2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
    case 5:
if(densidadePopulacional1 < densidadePopulacional2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (densidadePopulacional1 == densidadePopulacional2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;

default:
printf("Opcao invalida.");
    break;
}

switch (opcao2)  //começa o menu interativo
{
case 1:
    if(populacao1 > populacao2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (populacao1 == populacao2){
        printf("empate!");
    }else{
        printf("a cidade %s venceu!\n",nomeDaCidade2);
    }
    break;
case 2:
if(areaEmKm1 > areaEmKm2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (areaEmKm1 == areaEmKm2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
    case 3:
if(pib1 > pib2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (pib1 == pib2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
case 4:
if(numDeTuristicos1 > numDeTuristicos2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (numDeTuristicos1 == numDeTuristicos2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;
    case 5:
if(densidadePopulacional1 < densidadePopulacional2){
        printf("A cidade %s venceu!\n", nomeDaCidade1);
    }else if (densidadePopulacional1 == densidadePopulacional2){
        printf("empate!\n");
    }else{
        printf("a cidade %s venceu!\n", nomeDaCidade2);
    }
    break;

default:
printf("Opcao invalida.");
    break;
}

//somando as cartas e obtendo a vencedora.
long double soma1, soma2;
soma1 = (float) populacao1 + areaEmKm1 + pib1 + (float) numDeTuristicos1 + inversoDens1;
soma2 = (float) populacao2 + areaEmKm2 + pib2 + (float) numDeTuristicos2 + inversoDens2;

if(soma1 > soma2){
    printf("A cidade %s venceu, com o total de %.2Lf\n", nomeDaCidade1, soma1);
}else if(soma2 > soma1){
    printf("A cidade %s venceu, com o total de %.2Lf\n", nomeDaCidade2, soma2);
}else{
    printf("Surpreendentemente, houve um empate.\n");
}

return 0;
}