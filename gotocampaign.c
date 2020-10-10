#include <stdio.h>
#define TORIKIZOKU_FOOD_PRICE 298;

typedef struct {
    int cash;
    int point; 
} GoToMoney;

void main(void)
{
    GoToMoney goToMoney;
    goToMoney.cash = 600;
    goToMoney.point = 0;

GO_TO_TORIKIZOKU:
    printf(">>> Welcome to TORIKIZOKU!\n");

    printf("You Ordered Food.\n");
    goToMoney.cash -= TORIKIZOKU_FOOD_PRICE;
    if ( goToMoney.cash >= 0 ) {
        goto GO_OUT_FROM_TORIKIZOKU;
    } else {
        goto GO_TO_POLICE;
    }
GO_OUT_FROM_TORIKIZOKU:
    printf("<<< Thank You for Coming!\n");
    goToMoney.point += 1000;

    printf("You Got Point! Your Point is %d.\n", goToMoney.point);
    goto GO_TO_TORIKIZOKU;
GO_TO_POLICE:
    printf("Game Over.");
} 
