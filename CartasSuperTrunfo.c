#include <stdio.h>

struct CityCard {
    char name[50];
    char code[4];
    int population;
    float area;
    int pib;
    int numOfPoints;
    float populationDensity;
    float pibPerCapita;
    float superPower;
};


float getCardTotal(struct CityCard card) {
    return card.area + card.numOfPoints + card.pib + card.pibPerCapita + card.population + card.populationDensity;
}

int main() {
    struct CityCard userCity;
    struct CityCard computerCity = {
        "New York",
        "A01",
        8258000,
        783.8,
        1286000000,
        1280,
        computerCity.population / computerCity.area,
        computerCity.pib / computerCity.population,
        getCardTotal(computerCity),
    };
    
    printf("Insira o nome: \n");
    scanf("%49s", userCity.name);

    printf("Insira o código: \n");
    scanf("%3s", userCity.code);

    printf("Insira a população: \n");
    scanf("%d", &userCity.population);

    printf("Insira a área: \n");
    scanf("%f", &userCity.area);

    printf("Insira o pib: \n");
    scanf("%d", &userCity.pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &userCity.numOfPoints);

    userCity.populationDensity = userCity.population / userCity.area;
    userCity.pibPerCapita = userCity.pib / userCity.population;
    userCity.superPower = getCardTotal(userCity);

    printf("----\n");

    printf("Sua cidade: \n Nome: %s, \n Código: %s, \n População: %d, \n Área: %fkm², \n PIB: %d, \n Número de pontos turísticos: %d, \n Densidade populacional: %f, \n PIB per capita: %f, \n",
    userCity.name, userCity.code, userCity.population, userCity.area, userCity.pib, userCity.numOfPoints, userCity.populationDensity, userCity.pibPerCapita);

    printf("----\n");

    printf("Cidade do PC: \n Nome: %s, \n Código: %s, \n População: %d, \n Área: %fkm², \n PIB: %d, \n Número de pontos turísticos: %d, \n Densidade populacional: %f, \n PIB per capita: %f, \n",
    computerCity.name, computerCity.code, computerCity.population, computerCity.area, computerCity.pib, computerCity.numOfPoints, computerCity.populationDensity, computerCity.pibPerCapita);

    printf("----\n");

    if(computerCity.populationDensity > userCity.populationDensity) {
        printf("Sua cidade é a vencedora! \n Sua cidade: %f - Cidade do PC: %f \n", userCity.populationDensity, computerCity.populationDensity);
    } else if(computerCity.populationDensity < userCity.populationDensity) {
        printf("A cidade do PC venceu! \n Cidade do PC: %f - Sua cidade: %f \n", userCity.populationDensity, computerCity.populationDensity);
    } else {
        printf("Empate! \n Sua cidade: %f - Cidade do PC: %f \n", userCity.populationDensity, computerCity.populationDensity);
    }

    return 0;
}
