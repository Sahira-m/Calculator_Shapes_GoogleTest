#include <stdio.h>
#include <stdlib.h>
#include "shapes.h"
#include <string.h>
#include <ctype.h>

void checkScanf()
{
    while (getchar() != '\n')
        ;
}
float side1, side2, side3, areaTriangle, perimeterTriangle, base, height;
float width, height, areaRectangle, perimeterRectagle;
float radius, area, perimeter;
float perimeterTriangles(float side1, float side2, float side3)
{
    float perimeter = side1 + side2 + side3;
    return perimeter;
}
float areaTriangles(float base, float height)
{
    float area = 0.5 * base * height;
    return area;
}
float areaRectangles(float width, float height)
{
    float area = width * height;
    return area;
}
float perimeterRectagles(float width, float height)
{
    float perimeter = 2 * (width + height);
    return perimeter;
}
float perimeterCircle(float radius)
{

    float perimeter = 2 * 3.14 * radius;
    return perimeter;
}
float areaCircle(float radius)
{
    float area = 3.14 * radius * radius;
    return area;
}
int checkInputIsValid(float inputValue)
{
    int status = TRUE;
    if (scanf("%f", &inputValue) != 1)
        status = FALSE;
    return status;
}
int checkInputIsGreaterThanZero(float inputValue)
{
    int status = TRUE;
    if (inputValue <= 0)
        status = FALSE;
    return status;
}
void readTriangle()
{

    int numberStatus = TRUE, inputValid = TRUE;
    // numberStatus used to check the input is integer or number
    // inputValid used to check the input should be greater than zero
    printf(" \n Enter three sides of triangle: \n");
    printf("side1 :");
    scanf("%f", &side1);
    numberStatus = checkInputIsValid(side1);
    inputValid = checkInputIsGreaterThanZero(side1);
    printf("side2 :");
    scanf("%f", &side2);
    numberStatus = checkInputIsValid(side2);
    inputValid = checkInputIsGreaterThanZero(side2);
    printf("side3 :");
    scanf("%f", &side3);
    numberStatus = checkInputIsValid(side3);
    inputValid = checkInputIsGreaterThanZero(side3);
    if (numberStatus == TRUE && inputValid == TRUE)
    {
        perimeter = perimeterTriangles(side1, side2, side3);
    }
    else
    {
        printf("Your input is not valid");
    }

    printf("\n Enter base and height :");
    scanf("%f%f", &base, &height);
    numberStatus = checkInputIsValid(base);
    inputValid = checkInputIsGreaterThanZero(base);
    numberStatus = checkInputIsValid(height);
    inputValid = checkInputIsGreaterThanZero(height);
    if (numberStatus == TRUE && inputValid == TRUE)
    {
        area = areaTriangles(base, height);
        printf("\n The Area of triangel is :%.2f  Perimeter  is :%.2f ", area, perimeter);
        fflush(stdin);
    }
}
void readShapes()
{

    printf("Enter Width and height  :");
    scanf("%f%f", &width, &height);
    area = areaRectangles(width, height);
    perimeter = perimeterRectagles(width, height);
    printf("The Area is    :%.2f and Perimeter is :%.2f ", area, perimeter);
}
void readRadius()
{

    printf(" \n Enter the radius of circle :");
    scanf("%f", &radius);
    area = areaCircle(radius);
    perimeter = perimeterCircle(radius);
    printf("The Area is    :%.2f and Perimeter is :%.2f ", area, perimeter);
}
int shapesMenu()
{
    char choice[50];
    int condition;
    printf("\n CHOOSE SHAPES:");
    printf("\n \t TRIANGLE\n \t RECTANGLE \n \t PARALlELOGRAM \n \t CIRCLE  \n \t Return To Main Menu \n");
    checkScanf();
    scanf("%s", choice);
    strlwr(choice);
    if (strcmp(choice, TRIANGLE) == 0)
    {
        readTriangle();
        condition = TRUE;
    }
    else if (strcmp(choice, RECTANGLE) == 0)
    {
        readShapes();
        condition = TRUE;
    }
    else if (strcmp(choice, PARALlELOGRAM) == 0)
    {
        readShapes();
        condition = TRUE;
    }
    else if (strcmp(choice, CIRCLE) == 0)
    {
        readRadius();
        condition = TRUE;
    }
    else if (strcmp(choice, RETURM_TO_MAIN_MENU) == 0)
    {
        printf("Exit  to Main menu");
        condition = FALSE;
    }
    else
    {
        printf("\n Invalid option");
        condition = FALSE;
    }
    return condition;
}