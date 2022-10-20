#include <stdio.h>
#include <stdlib.h>

int main(){
    float hoehe, bmi;
    int gewicht, lower, step, upperr;

    hoehe = 1.8;
    lower = 60;
    step =1;
    upperr = 100;
    gewicht = lower;

    printf("Willkommen zum BMI Rechner \n");
    for(gewicht = lower; gewicht <= upperr; gewicht = gewicht + step){

        bmi = gewicht / pow(hoehe,2);

        printf("%4d %6.3f\n", gewicht, bmi);

    }

    return(0);
}
