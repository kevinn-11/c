/**************************************
 * Programa que calcula la mitjana
 * aritmètica de 2 enters
 * Kevin Crespo 25-26 *****/
#include <stdio.h>
void main(){
    int a, b;
    float mitjana;
    printf("1r núm?: ");
    scanf("%d", &a);
    printf("2n núm?: ");
    scanf("%d", &b);
    printf("La mitjana és: %f\n", (a+b)/2.0);
    return;
}
