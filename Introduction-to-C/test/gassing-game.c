#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_number, chance = 3;
    bool is_loss = true;
    int lucky_number = rand() % 10 + 1;

    while (chance > 0)
    {
        printf("Guess The Lucky Number (%d): ", chance);
        scanf("%d", &choosen_number);

        if (lucky_number == choosen_number)
        {
            printf("Congratulation! You have choose the correct number\n");
            is_loss = false;
            break;
        }

        chance--;
    }

    if (is_loss)
    {
        printf("You have loss. Lucky Number is %d \n", lucky_number);
    }

    return 0;
}