#include <stdio.h>
#include <math.h>

void BMIAusgaben(int);
int Test;
int gibGewichtEin;



/*int main(){
    float zahl;
    int a;
    int gewicht;
    zahl = Test / (sqrt(gibGewichtEin));
    BMIAusgaben(zahl);

    return(0);

}

void BMIAusgaben(int zahl){
    printf("Ihr BMI: %f ", zahl);
    return;
}

int Test(){
    int a;
    printf("Ihr Groesse in cm: ");
    scanf("%d", &a);
    return a;
}

int gibGewichtEin(){
    int gewicht;
    printf("Ihr Gewicht in kg: ");
    scanf("%d", &gewicht);
    return gewicht;
}*/



int main(){
    float groesse;
    float gewicht;
    float m_groesse;
    float bmi;

    printf("Willkomen zum BMI-Rechner \n");
    printf("Ihre Groesse in cm: ");
    scanf("%f", &groesse);
    printf("Ihr Gewicht in kg: ");
    scanf("%f", &gewicht);


    m_groesse = pow(groesse,2) / 10000;
    bmi = gewicht / m_groesse;

    printf("Ihr BMI: %.1f\n ", bmi);
    printf("Vielen Dank fuer Ihr Vertrauen!");
    return(0);
}



