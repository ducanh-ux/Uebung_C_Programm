#include <stdio.h>
#include <stdlib.h>

int main(){

    char a, b, c, d;
    int ausgabe = 0;

    printf("Willkommen beim Binaer Rechner\n");
    printf("Binaer einlesen: ");
    scanf("%c %c %c", &a, &b, &c);

    a = a - '0';
    b = b - '0';
    c = c - '0';

    ausgabe = 4 * a + 2 * b + c;

    printf("Dezimal Wert: %4.0d\n", ausgabe);
    printf("Vielen Dank!");

    getchar();
    getchar();

    return(0);
    }
