#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES // for C
#include <math.h>


int main(){

    /*Fliesskommazahl*/
    int radius, hoehe;
    const float pi = 3.14159;
    float volumen = 0;
    float oberflaecher = 0;


        /*Eingabe*/
        printf("Willkommen zum Zylinder Rechner \n");
        printf("Radius(cm): ");
        scanf("%d", &radius);
        printf("Hoehe(cm): ");
        scanf("%d", &hoehe);

            /*Ausgabe*/
            volumen = pi * pow(radius,2) * hoehe;
            oberflaecher = 2 * pi * radius * (radius + hoehe);
            printf("Volumen: %4.2f Kubikcentimeter\n", volumen);
            printf("Oberflaeche: %4.2f Quadratcentimeter", oberflaecher);

    return(0);
}
