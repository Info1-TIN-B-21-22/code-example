/*
- Programme
  - Demander utilisateur de saisir une suite de note en double entre 0 et 6
  - Si valeur fausse, on recommence
  - l'utilisateur peut continuer, afficher moyenne c a
*/

#include <stdio.h>
#include <stdbool.h>

double AskNote(){
    printf("Veuillez entrer une note entre 0 et 6 \n>");
    
    double note;
    do{        
        const int ret = scanf("%lf", &note);
        while(getchar() != '\n'){}

        if( ret == 1 && note >= 0.0 && note <= 6.0 ){
            return note;
        }

        printf("Erreur de saisie, veuillez recommencer\n");
    }while(true);
}

bool AskContinue(){
    printf("Veuillez entrer 'a' pour afficher ou 'c' pour "
        "entrer une nouvelle note\n>");
    
    char c;
    do{        
        scanf("%c", &c); // retour non obligatoire car c'est un char
        while(getchar() != '\n'){}

        switch (c)
        {
        case 'A':
        case 'a':
            return false;
            // Pas besoin de break car le return fait sortie du switch
        
        case 'C':
        case 'c':
            return true;
        }

        printf("Erreur de saisie, veuillez recommencer\n");
    }while(true);
}


int ex_moyenne(){

    printf("\n\n\033[1;34mExercice moyenne\n\033[0;30m");

    double max = 0.0;
    double min = 6.0;
    double somme = 0;
    int nbr = 0;

    double note;
    do{
        note = AskNote();
        somme += note;
        nbr++;

        // au lieu d'initialiser, il est possible de mettre à jour min et
        // max lors du premier passage.
        if( nbr == 1){
            max = note;
            min = note;
        }


        if( note > max )
            max = note;
        
        if( note < min ) // ne pas utiliser de else if
            min = note;

    }while( AskContinue() );

    printf("Somme : %.2lf\n", somme);
    printf("Nbr   : %d\n", nbr);
    printf("Min   : %.2lf\n", min);
    printf("Max   : %.2lf\n", max);
    printf("Moy   : %.2lf\n", (somme)/nbr);

    return 0;
}