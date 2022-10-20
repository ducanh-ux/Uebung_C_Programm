#include <stdio.h>
#include <stdlib.h>

int main(){
    int anzahl;
    int zeile;
    int spalte;

    printf("Wie viele Klingelzeichen moechten Sie?: ");
    scanf("%d", &anzahl);
    for(zeile = 0; zeile < anzahl; zeile = zeile + 1){

        for(spalte = 0; spalte < zeile; spalte = spalte + 1){

            printf(" ");
        }
        printf("*\n");
    }
    return(0);
}
