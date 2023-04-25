#ifndef CALCULATOR
#define ADD '+'
#define SUBSTRACT '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define MODULAR_DIVISION '%'
#define TRUE 1U
#define FALSE 0U
int calculatorMenu(void);
void checkScanf(void);
float addFunction(float, float);
float substractFunction(float, float);
float multiplyFunction(float, float);
float divideFunction(float, float);
float modularFunction(float, float);
int checkInputIsValid(float);
#endif