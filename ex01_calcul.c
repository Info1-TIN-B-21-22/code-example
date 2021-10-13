#include <stdio.h>

/*
    Réaliser un programme qui demande à l'utilisateur de saisir deux nombres et le
    programme va afficher la somme et la division des deux valeurs

    Les valeurs saisies sont entières signées
    La division est faite en `double`
*/

// Format et indentation
// if / else if / else avec indentation
// printf avec %d et %lf
// scanf simple %d et %lf

void ex01_calcul(){

    printf("Bonjour, veuillez entrer la valeur 1\n>");    
    int valeur1;
    scanf("%d", &valeur1);

    printf("Veuillez entrer la valeur 2\n>");
    int valeur2;
    scanf("%d", &valeur2);

    printf("La valeur 1 est : %d\n", valeur1);
    printf("La valeur 2 est : %d\n", valeur2);

    int somme = valeur1 + valeur2;
    if( valeur2 != 0 )
    {
        int div_entier = valeur1 / valeur2;
        printf("La div entière vaut : %d\n", div_entier);
    }

    double div = (double)valeur1 / valeur2; // cast explicite

    int div_entier = valeur1 / valeur2;
    printf("La div entière vaut : %d\n", div_entier);

    //int tmp = valeur1 * 12.2; // cast implicite

    printf("La somme vaut    : %d\n", somme);
    printf("La division vaut : %.2lf\n", div); //.2 nombre après ,

    // ==  !=  >  <  >=  <=
    // && ||   et   ou
    if( valeur1 == valeur2 )
    {
        printf("La valeur 1 est égale à la valeur 2\n");
    }
    else if( valeur1 > valeur2 )
    {
        printf("La valeur 1 est la plus grande\n");
    }
    else{
        printf("La valeur 2 est la plus grande\n");
    }

    if( valeur1 >= 0 && valeur2 >= 0){
        printf("Les deux valeurs sont positives\n");
    }
}