#include <stdio.h>

int exemple_date(){
    printf("\n\033[1;34mExemple de date\n\033[0;30m");

    printf("Veuillez entrer une date dans le format suivant : yyyy/mm/dd hh:mm\n>");

    // 12/06/2018 22:12 => fonctionne
    // 42/06/2018 22:12 => fonctionne pas
    // 12/06/2018 22: => fonctionne pas
    // 12aa/06/2018 22:12 => fonctionne pas

    int year, month, day, hour, minute;
    // utilise const car la variable ne peut pas changer
    const int ret = scanf( "%d/%d/%d %d:%d", &year, &month, &day, &hour, &minute);

    if( ret < 5 ){
        printf("Erreur de saisie");
        return 2;
    }

    if( year < 0 ||
        month <= 0 || month > 12 ||
        day <= 0 || day > 31 ||
        hour <= 0 || hour > 24 ||
        minute <= 0 || minute >= 60 )
    {
        printf("Erreur de saisie nombre invalide");
        return 1;
    }

    // on utilise une constante pour la largeur du texte
    const int length = 5;
    printf("Year    : %*d\n", length, year);
    printf("Month   : %*d\n", length, month);
    printf("Day     : %*d\n", length, day);
    printf("Hour    : %*d\n", length, hour);
    printf("Minute  : %*d\n", length, minute);

    return 0;
}