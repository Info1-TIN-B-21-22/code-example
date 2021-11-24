#include <stdio.h>
#include <stdbool.h>

void AskComplexe(int* real, int* img){
    printf("Veuillez entrer un nombre complexe dans ce format : 1,4j \n>");
    
    int r,i;
    char c;
    do{        
        // Attention pour contrôler le dernier caractère, il est obligatoire de passer par %c
        const int ret = scanf("%d,%d%c", &r,&i,&c);
        while(getchar() != '\n'){}

        if( ret == 3 && c == 'j' ){
            *real = r;
            *img = i;
            return;
        }

        printf("Erreur de saisie, veuillez recommencer\n");
    }while(true);
}

void Print(int real, int img){
    printf("Res : %d + j%d\n", real, img);
}

void AddComplex(int* real, int* img){

    int r, i;
    AskComplexe(&r, &i);

    *real += r;
    *img += i;
}

int ex_complexe(){
    
    int real;
    int img;

    AskComplexe(&real, &img);
    Print(real, img);
    AddComplex(&real, &img);
    Print(real, img);
    return 0;
}