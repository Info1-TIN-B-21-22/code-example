#include "main.h"
#include <stdio.h>

// sans argument
//int main(){

    // ./app 1 2 c
    // argc : nombre arg
// argv : tableau (premier 0) chaine de caractère
int main(int argc, char* argv[])
{
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
    
    //ex01_calcul();
    //ex02_scanf();
    exemple_date();
}