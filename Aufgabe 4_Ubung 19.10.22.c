#include <stdio.h>
#include <stdlib.h>

int main(){

    char a, b, c, d;


    printf("Willkommen beim Kryptographie Tool\n");
    printf("Text eingeben: ");
    scanf("%c %c %c %c", &a, &b, &c, &d);


    a++;

    b++;

    c++;

    d++;



    printf("Verschluesselt: %4.0c%c%c%c\n", a, b, c, d);
    printf("Vielen Dank!");

    getchar();
    getchar();

    return(0);
    }
