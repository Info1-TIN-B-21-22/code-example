#include <stdio.h>

int ex02_scanf(){

    printf("\n\033[1;34mExemple de scanf\n\033[0;30m");

    char res = 'a'; // res = 97;
    if( res > 'b' ){
        printf("A > B");
    }
    printf("%d - %c\n", 'a',  97);

    int a=3, b=0, d=0;
    char c='a';
    printf("Entrer A et B séparées par un espace : \n>");
    
    int ret = scanf("%d %d", &a, &b);
    if( ret < 2 ){
        printf("Mauvaise saisie");
        return 1;
    }
    while( getchar() != '\n'){}

    printf("Entrer d : \n>");
    scanf("%d", &d);

    printf("La valeur de \"a\" est : %d\n", a);
    printf("La valeur de \"b\" est : %d\n", b);
    printf("La valeur de \"c\" est : %c\n", c);

    return 0;
}