#include <stdio.h>
#include "calculator.h"

float addFunction(float firstNumber, float secondNumber)
{
    float output = firstNumber + secondNumber;
    return output;
}
float substractFunction(float firstNumber, float secondNumber)
{
    float output = firstNumber - secondNumber;
    return output;
}

float multiplyFunction(float firstNumber, float secondNumber)
{
    float output = firstNumber * secondNumber;
    return output;
}
float divideFunction(float firstNumber, float secondNumber)
{
    float output = firstNumber / secondNumber;
    return output;
}
float modularFunction(float firstNumber, float secondNumber)
{
    float output = (int)(firstNumber + 0.5) % (int)(secondNumber + 0.5);
    return output;
}
int calculatorMenu()
{
    float firstNum, secondNum, result;
    char operator;
    int condition, inputValid = TRUE;
    printf("\n Enter First Number :");
    checkScanf();
    scanf("%f", &firstNum);
    inputValid = checkInputIsValid(firstNum);
    printf("\n Enter Second Number :");
    checkScanf();
    scanf("%f", &secondNum);
    inputValid = checkInputIsValid(firstNum);
    printf("\n Enter your operatot +  -  *   / or %%  :");
    checkScanf();
    scanf("%c", &operator);

    if (inputValid == TRUE)
    {
        if (operator== ADD)
        {
            result = addFunction(firstNum, secondNum);
            printf("\n Addition Result is : %.2f", result);
            condition = TRUE;
        }
        else if (operator== SUBSTRACT)
        {
            result = substractFunction(firstNum, secondNum);
            printf("\n Substraction  Result is : %.2f", result);
            condition = TRUE;
        }
        else if (operator== MULTIPLY)
        {
            result = multiplyFunction(firstNum, secondNum);
            printf("\n Multiplication  Result is : %.2f", result);
            condition = TRUE;
        }
        else if (operator== DIVIDE)
        {
            result = divideFunction(firstNum, secondNum);
            printf("\n Division  Result is : %.2f", result);
            condition = TRUE;
        }
        else if (operator== MODULAR_DIVISION)
        {
            result = modularFunction(firstNum, secondNum);
            printf("\n Modular  Result is : %.2f", result);
            condition = TRUE;
        }
        else
        {
            printf("\n Please choose a valid operator");
            condition = FALSE;
        }
    }
    else
    {
        printf("\n Input is not valid");
    }
    return condition;
}
