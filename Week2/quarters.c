#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int spinner (int random_number)
{

return 0;
}


int main()
{

    const int quarters = 4;
    int total_quaters = 20 * quarters;
    int bet;
    int random_number;
    int game_over = 0;
    srand(time(NULL));

    printf("Welcome to the Betting game\n");
    printf("You have $%d quarters.\n", total_quaters/quarters);


    while(!game_over){
    printf("You have %d quaters ($%d)\n", total_quaters, total_quaters/quarters);
    printf("Enter the number of quaters you want to bet (or 0 to cash out): ");
    scanf("%d", &bet);  

    if (bet == 0)
    {
        printf("You have cashed out $%d\n", total_quaters/quarters); // Ensure rewording of the output
        game_over = 1;
        return 0;
    }
    else if (bet > total_quaters)
    {
        printf("You don't have enough quaters to bet\n"); // Ensure rewording of the output
        game_over = 1;
        return 0;
    }
    else
    {
        total_quaters -= bet;
        printf("You have %d quaters left ($%d)\n", total_quaters, total_quaters/quarters);
        random_number = rand() % 100 + 1;

        printf("Reel stopped on the number %d\n", random_number);

        int new_bet = spinner(random_number);

    }
    }

    return 0;
    }