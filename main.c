#include "main.h"
#include <stdio.h>

// bool
#include <stdbool.h>

#define SIZE_ARRAY 12

// sans argument
//int main(){

// void ne retourne pas de valeur
void AffichageSimple(){
    printf("Bonjour\n");
}

// int type du paramètre
void Affichage(int val, double d){
    // accès à val
    printf("La valeur est : %d\n", val);
    printf("La valeur double : %lf\n", d);
}

double Moyenne(int a, double b){
    double res = (a+b)/2.0;
    return res;
    // return (a+b)/2.0;
}

void Ajouter(int var){
    var += 10;
}

    // ./app 1 2 c
    // argc : nombre arg
// argv : tableau (premier 0) chaine de caractère
int main(int argc, char* argv[])
{
    td_crible();
    return;

    int tab[SIZE_ARRAY];

    printf("Nombre d'arg : %d\n", argc);

    // premier arg indice 0
    printf("Arg 0 : %s\n", argv[0]);

    double test_sscanf;
    sscanf("12.134", "%lf", &test_sscanf);
    printf("La valeur du test : %lf\n", test_sscanf);

    if( argc > 1 ){
        printf("Arg 1 : %s\n", argv[1]);

        int value;
        sscanf(argv[1], "%d", &value);
        printf("Valeur arg 1 : %d\n", value);
    }


    // type
    int val_i = 2;
    double val_d = 6;
    double res = val_d + val_i;

    // attention calcul en entier : 1/2 + 3.5 * 4;

    int res_i = val_i > val_d;
    bool res_b = val_i < val_d;
    bool var = true;

    if( var ){ // pas bien var == true
        printf("var est vraie\n");
    }

    if( !var ){
        printf("var est fausse\n");
    }

    // fonction 
    int val_1 = 12;
    double val_2 = 4;
    double moy = (val_1 + val_2);
    AffichageSimple();
    Affichage(45, val_2);
    Affichage( 12,  Moyenne(12, 4.5) );

    Ajouter(val_1);
    printf("Valeur ajouter : %d\n", val_1);

    //ex01_calcul();
    //ex02_scanf();
    //exemple_date();

    //ex_moyenne();
    ex_complexe();
}