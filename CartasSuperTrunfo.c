#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char Pais [50] ,EstadoA [50] ,EstadoB [50] ,CidadeA [50] ,CidadeB [50];
  int A01, B01, PopulacaoA, PopulacaoB, PontosturisticosA, PontosturisticosB;
  float AreaA, AreaB, PibA, PibB;
    
  // Área para entrada de dados
  printf("digite qual sera a carta:\n", A01);
  scanf("%d", &A01);

  printf("");

  printf("digite o pais:\n", Pais);
  scanf("%s", &Pais);

  printf("digite o estado de A ou B:\n", EstadoA, EstadoB);
  scanf("%s", &EstadoA, EstadoB);

  printf("digite a cidade de A ou B:\n", CidadeA, CidadeB);
  scanf("%s", &CidadeA, CidadeB);

  printf("digite a população de A ou B:\n", PopulacaoA, PopulacaoB);
  scanf("%d", &PopulacaoA, PopulacaoB);

  printf(" digite a Área de A ou B:\n", AreaA, AreaB);
  scanf("%f", &AreaA, AreaB);

  printf("digite o PIB de A ou B:\n", PibA, PibB);
  scanf("%f", &PibA, PibB);

  printf("digite os Pontos turisticos de A ou B:\n", PontosturisticosA, PontosturisticosB);
  scanf("%d", &PontosturisticosA, PontosturisticosB);

  // Área para exibição dos dados da cidade
  printf(" - A01: %d - B01: %d\n - Pais: %s\n", A01, B01, Pais);
  printf(" - Estado A: %s - Estado B: %s\n - Cidade A: %s - Cidade B: %s\n", EstadoA, EstadoB, CidadeA, CidadeB);
  printf(" - População A: %d - População B: %d\n - Área A: %f - Área B: %f\n", PopulacaoA, PopulacaoB, AreaA, AreaB);
  printf(" - PIB A: %f - PIB B: %f\n - Pontos Turisticos A: %d - Pontos Turisticos B: %d", PibA, PibB, PontosturisticosA, PontosturisticosB);
  
  
return 0;
} 
