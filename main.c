#include <stdio.h>
#include <stdlib.h>
#include "shapes.h"
#include "calculator.h"
#include "game.h"
#define SHAPES_MENU 1
#define CALCULATOR_MENU 2
#define PLAYROCKSCISSORPAPER 3
#define EXIT_APP 4

unsigned int choiceMenu()
{
    printf("  \n Enter your Choice: \n \t 1.Shapes \n  \t 2.Calculator \n  \t 3.Game  \n  \t 4.Exit  \n \t \t");
    unsigned int userInput;
    // option ? scanf(" %d", &option) : checkScanf();
    // fflush(stdin);
    // checkScanf();
    scanf("%d", &userInput);
    return userInput;
}

int main()
{
    while (1)
    {
        unsigned int yourChoice = choiceMenu();
        if (yourChoice == EXIT_APP)
            break;
        else if (yourChoice == SHAPES_MENU)
            shapesMenu();
        else if (yourChoice == CALCULATOR_MENU)
            calculatorMenu();
        else if (yourChoice == PLAYROCKSCISSORPAPER)
            RockPaperSciccor();
        else
            printf("\n Your choice is Invalid!!!");
    }
    return 0;
}