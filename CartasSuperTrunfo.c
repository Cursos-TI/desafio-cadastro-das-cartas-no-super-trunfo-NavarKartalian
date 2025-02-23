#include<stdio.h>
#include<stdlib.h>

//Card object structure and properties
struct CityCard {
    char name[50];
    char code[4];
    unsigned long int population;
    float area;
    float pib;
    int numOfPoints;
    float populationDensity;
    float pibPerCapita;
    float superPower;
};

//Calculate the sum of the card properties
float getCardTotal(struct CityCard card) {
    return card.area + card.numOfPoints + card.pib + card.pibPerCapita + card.population + card.populationDensity;
}

//Function responsible for register the inputs and return a card with the values 
struct CityCard registerCard() {
    struct CityCard card;

    system("clear");

    printf("Insira o nome: \n");
    scanf("%49s", card.name);

    printf("Insira o código: \n");
    scanf("%3s", card.code);

    printf("Insira a população: \n");
    scanf("%lu", &card.population);

    printf("Insira a área: \n");
    scanf("%f", &card.area);

    printf("Insira o pib: \n");
    scanf("%f", &card.pib);

    printf("Insira o número de pontos turísticos: \n");
    scanf("%d", &card.numOfPoints);

    card.populationDensity = card.population / card.area;
    card.pibPerCapita = card.pib / card.population;
    card.superPower = getCardTotal(card);

    return card;
}

//Function responsible for comparing the two cards and deling with the results
void compareCards(struct CityCard cardA, struct CityCard cardB) {
    //Variables to keep track of each card points
    int cardAPoints = 0;
    int cardBPoints = 0;

    printf("Comparação: \n");
    printf("Card 1 = 1, Card 2 = 0; \n");

     printf("\n");

    printf("População: \n");
    if(cardA.population > cardB.population) {
        printf("Card 1: %lu > Card 2: %lu, Vencedor: 1 \n", cardA.population, cardB.population);
        cardAPoints++;
    } else if(cardA.population < cardB.population) {
        printf("Card 1: %lu < Card 2: %lu, Vencedor: 0 \n", cardA.population, cardB.population);
        cardBPoints++;
    } else {
        printf("Card 1: %lu = Card 2: %lu, Empate \n", cardA.population, cardB.population);
    }

     printf("\n");

    printf("Área: \n");
    if(cardA.area > cardB.area) {
        printf("Card 1: %f > Card 2: %f, Vencedor: 1 \n", cardA.area, cardB.area);
        cardAPoints++;
    } else if(cardA.area < cardB.area) {
        printf("Card 1: %f < Card 2: %f, Vencedor: 0 \n", cardA.area, cardB.area);
        cardBPoints++;
    } else {
        printf("Card 1: %f = Card 2: %f, Empate \n", cardA.area, cardB.area);
    }

     printf("\n");

    printf("PIB: \n");
    if(cardA.pib > cardB.pib) {
        printf("Card 1: %f > Card 2: %f, Vencedor: 1 \n", cardA.pib, cardB.pib);
        cardAPoints++;
    } else if(cardA.pib < cardB.pib) {
        printf("Card 1: %f < Card 2: %f, Vencedor: 0 \n", cardA.pib, cardB.pib);
        cardBPoints++;
    } else {
        printf("Card 1: %f = Card 2: %f, Empate \n", cardA.pib, cardB.pib);
    }

     printf("\n");

    printf("Número de pontos turísticos: \n");
    if(cardA.numOfPoints > cardB.numOfPoints) {
        printf("Card 1: %d > Card 2: %d, Vencedor: 1 \n", cardA.numOfPoints, cardB.numOfPoints);
        cardAPoints++;
    } else if(cardA.numOfPoints < cardB.numOfPoints) {
        printf("Card 1: %d < Card 2: %d, Vencedor: 0 \n", cardA.numOfPoints, cardB.numOfPoints);
        cardBPoints++;
    } else {
        printf("Card 1: %d = Card 2: %d, Empate \n", cardA.numOfPoints, cardB.numOfPoints);
    }

     printf("\n");

    printf("Densidade populacional: \n");
    if(cardA.populationDensity < cardB.populationDensity) {
        printf("Card 1: %f < Card 2: %f, Vencedor: 1 \n", cardA.populationDensity, cardB.populationDensity);
        cardAPoints++;
    } else if(cardA.populationDensity > cardB.populationDensity) {
        printf("Card 1: %f > Card 2: %f, Vencedor: 0 \n", cardA.populationDensity, cardB.populationDensity);
        cardBPoints++;
    } else {
        printf("Card 1: %f = Card 2: %f, Empate \n", cardA.populationDensity, cardB.populationDensity);
    }

     printf("\n");

    printf("PIB per capita: \n");
    if(cardA.pibPerCapita > cardB.pibPerCapita) {
        printf("Card 1: %f > Card 2: %f, Vencedor: 1 \n", cardA.pibPerCapita, cardB.pibPerCapita);
        cardAPoints++;
    } else if(cardA.pibPerCapita < cardB.pibPerCapita) {
        printf("Card 1: %f < Card 2: %f, Vencedor: 0 \n", cardA.pibPerCapita, cardB.pibPerCapita);
        cardBPoints++;
    } else {
        printf("Card 1: %f = Card 2: %f, Empate \n", cardA.pibPerCapita, cardB.pibPerCapita);
    }

     printf("\n");

    printf("Super poder: \n");
    if(cardA.superPower > cardB.superPower) {
        printf("Card 1: %f > Card 2: %f, Vencedor: 1 \n", cardA.superPower, cardB.superPower);
        cardAPoints++;
    } else if(cardA.superPower < cardB.superPower) {
        printf("Card 1: %f < Card 2: %f, Vencedor: 0 \n", cardA.superPower, cardB.superPower);
        cardBPoints++;
    } else {
        printf("Card 1: %f = Card 2: %f, Empate \n", cardA.superPower, cardB.superPower);
    }

    printf("\n");
    printf("----\n");
    printf("\n");

    //If statement responsible for presenting the result based on the number of points that each card acquired
    printf("Resultado: \n");
    if(cardAPoints > cardBPoints) {
        printf("Card 1: %d pontos > Card 2: %d pontos \n", cardAPoints, cardBPoints);
        printf("Vencedor: 1 \n");
    } else if(cardAPoints < cardBPoints) {
        printf("Card 1: %d pontos < Card 2: %d pontos \n", cardAPoints, cardBPoints);
        printf("Vencedor: 0 \n");
    } else {
        printf("Card 1: %d pontos = Card 2: %d pontos \n", cardAPoints, cardBPoints);
        printf("Empate \n");
    }
}

int main() {
    //Declare two card variables
    struct CityCard cityA;
    struct CityCard cityB;

    //Call the function that triggers the user input and define each card variable its return
    cityA = registerCard();

    cityB = registerCard();

    system("clear");

    //Prints each card registered
    printf("Card 1: \n Nome: %s, \n Código: %s, \n População: %lu, \n Área: %fkm², \n PIB: %f, \n Número de pontos turísticos: %d, \n Densidade populacional: %f, \n PIB per capita: %f, \n Super poder: %f \n",
    cityA.name, cityA.code, cityA.population, cityA.area, cityA.pib, cityA.numOfPoints, cityA.populationDensity, cityA.pibPerCapita, cityA.superPower);

    printf("\n");

    printf("Card 2: \n Nome: %s, \n Código: %s, \n População: %lu, \n Área: %fkm², \n PIB: %f, \n Número de pontos turísticos: %d, \n Densidade populacional: %f, \n PIB per capita: %f, \n Super poder: %f \n",
    cityB.name, cityB.code, cityB.population, cityB.area, cityB.pib, cityB.numOfPoints, cityB.populationDensity, cityB.pibPerCapita, cityB.superPower);
     
    printf("\n");
    printf("----\n");
    printf("\n");

    //Call the function responsible for comparing each card value
    compareCards(cityA, cityB);

    return 0;
}
