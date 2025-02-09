#include <stdio.h>

int main() {
    char name[50];
    char code[4];
    int population;
    int area;
    int pib;
    int numOfPoints;

    printf("Insira o nome: \n");
    scanf("%s", name);

    printf("Insira o código: \n");
    scanf("%s", code);

    printf("Insira a população: \n");
    scanf("%d", &population);

    printf("Insira a área: \n");
    scanf("%d", &area);

    printf("Insira o pib: \n");
    scanf("%d", &pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &numOfPoints);

    printf("Nome: %s, \n Código: %s, \n População: %d, \n Área: %dm², \n PIB: %d, \n Número de pontos turísticos: %d, \n", name, code, population, area, pib, numOfPoints);

    return 0;
}
