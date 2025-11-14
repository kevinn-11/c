/**************************************
 * Programa que intercanvia dos nombres
 * intercanvi de 2 nombres
 * Kevin Crespo 25-26 *****/
#include <stdio.h>
void main(){
    int a, b, aux;

    printf("Intro a: ");
    scanf("%d", &a);
    printf("Intro b: ");
    scanf("%d", &b);
    aux=a;
    a=b;
    b=aux;
    printf("Intercanviat a i b és: %d | %d\n", a, b);
    return;
}
